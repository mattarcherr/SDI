#ifndef DBC_H
#define DBC_H

#include <cstring>
#include <QDebug>
#include <string>
#include <string.h>

#include <vector>
#include "mariadb/conncpp.hpp"


class database {
public:
    int add(QString fullName, QString userName, QString password, QString role);
    bool remove(QString userName);
    bool update(std::string field, QString oldValue, QString newValue);
    int check(QString userName, QString password);
    QString select(std::string needed_field, QString givenField, QString givenValue);
    database();
    ~database();
};

class shared {
public:
    std::shared_ptr<sql::Connection> conn;
};

shared share;
bool cnst_failed = false;

bool database::remove(QString userName) {
    try {
        std::unique_ptr<sql::PreparedStatement> stmnt(share.conn->prepareStatement("delete from profile where userName = ?"));
        stmnt->setString(1, userName.toStdString());
        stmnt->executeQuery();
        return 1;
    }
    catch(sql::SQLException& e){
      return 0;
   }
}


bool database::update(std::string field, QString oldValue, QString newValue) {
    try {
        // Create a new PreparedStatement
        std::unique_ptr<sql::PreparedStatement> stmnt(share.conn->prepareStatement("update profile set ? = ? where id = ?"));
        // Bind values to SQL statement
        stmnt->setString(1, field);
        stmnt->setString(2, oldValue.toStdString());
        stmnt->setString(3, newValue.toStdString());
        // Execute query
        stmnt->executeQuery();
        return 1;
    }
    catch(sql::SQLException& e){
      return 0;
   }
}


int database::add(QString fullName, QString userName, QString password, QString role)
{
    try {
        std::unique_ptr<sql::PreparedStatement> stmnt(share.conn->prepareStatement("insert into profile (fullName, userName, password, role) values (?,?,?,?)"));
        stmnt->setString(1, fullName.toStdString());
        stmnt->setString(2, userName.toStdString());
        stmnt->setString(3, password.toStdString());
        stmnt->setString(4, role.toStdString());
        stmnt->executeQuery();
        return 1;
    }
    catch(sql::SQLException& e){
      qDebug() << "Error inserting new person: " << e.what();
      return 0;
   }
}

QString select (std::string needed_field, QString givenField, QString givenValue) {
    try {
        std::unique_ptr<sql::PreparedStatement> stmnt(share.conn->prepareStatement("select ? from profile where ? = ?"));
        stmnt->setString(1, needed_field);
        stmnt->setString(2, givenField.toStdString());
        stmnt->setString(3, givenValue.toStdString());
        sql::ResultSet *res = stmnt->executeQuery();

        res->next();
        sql::SQLString selectedString = res->getString(1);
        if (selectedString == ""){
            return selectedString.c_str();
        }
        else return "failed";
    }
    catch(sql::SQLException& e){
        qDebug() << "failed login check: ", e.what();
        return "failed";
   }

}

int database::check(QString userName, QString password) {
    try {
        if(password.isEmpty()){
            std::unique_ptr<sql::PreparedStatement> stmnt(share.conn->prepareStatement("select exists(select * from profile where userName=?)"));
            stmnt->setString(1, userName.toStdString());
            sql::ResultSet *res = stmnt->executeQuery();

            res->next();
            int result = res->getInt(1);
            if(result == 1){
                return 1;
            }
            else { return 0; }
        }
        else{
            std::unique_ptr<sql::PreparedStatement> stmnt(share.conn->prepareStatement("select password from profile where userName=?"));
            stmnt->setString(1, userName.toStdString());
            sql::ResultSet *res = stmnt->executeQuery();
            res->next();
            if (res->getString(1).c_str() == password.toStdString()){
                return 1;
            }
            else {return 2;}
        }
    }
    catch(sql::SQLException& e){
        qDebug() << e.what();
   }
    return false;
}



database::database()
{
    try {
        cnst_failed = false;
        sql::Driver* driver = sql::mariadb::get_driver_instance();

        sql::SQLString url("jdbc:mariadb://82.7.78.157:3306/SDI");
        sql::Properties properties({{"user", "remote"}, {"password", "1234"}});

        std::shared_ptr<sql::Connection> conn(driver->connect(url, properties));
        share.conn = conn;

        qDebug() << "DB connection made";
    }
    catch(sql::SQLException& e){
        qDebug() << e.what();
        cnst_failed = true;
        return;
    }
}

database::~database()
{
    if (!cnst_failed){
        share.conn->close();
        qDebug() << "DB connection closed";
    }
}

#endif // DBC_H
