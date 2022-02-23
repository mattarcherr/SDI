QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++11

# The following define makes your compiler emit warnings if you use
# any Qt feature that has been marked deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    src/main/logIn.cpp \
    src/main/main.cpp \
    src/main/mainwindow.cpp

HEADERS += \
    src/dbC/dbC.h \
    src/dbC/mariadb/conncpp.hpp \
    src/dbC/mariadb/conncpp/CArray.hpp \
    src/dbC/mariadb/conncpp/CallableStatement.hpp \
    src/dbC/mariadb/conncpp/Connection.hpp \
    src/dbC/mariadb/conncpp/DatabaseMetaData.hpp \
    src/dbC/mariadb/conncpp/Driver.hpp \
    src/dbC/mariadb/conncpp/DriverManager.hpp \
    src/dbC/mariadb/conncpp/Exception.hpp \
    src/dbC/mariadb/conncpp/ParameterMetaData.hpp \
    src/dbC/mariadb/conncpp/PreparedStatement.hpp \
    src/dbC/mariadb/conncpp/ResultSet.hpp \
    src/dbC/mariadb/conncpp/ResultSetMetaData.hpp \
    src/dbC/mariadb/conncpp/SQLString.hpp \
    src/dbC/mariadb/conncpp/Savepoint.hpp \
    src/dbC/mariadb/conncpp/Statement.hpp \
    src/dbC/mariadb/conncpp/Types.hpp \
    src/dbC/mariadb/conncpp/Warning.hpp \
    src/dbC/mariadb/conncpp/buildconf.hpp \
    src/dbC/mariadb/conncpp/compat/Array.hpp \
    src/dbC/mariadb/conncpp/compat/Executor.hpp \
    src/dbC/mariadb/conncpp/compat/Object.hpp \
    src/dbC/mariadb/conncpp/compat/SQLType.hpp \
    src/dbC/mariadb/conncpp/compat/Struct.hpp \
    src/dbC/mariadb/conncpp/jdbccompat.hpp \
    src/main/logIn.h \
    src/main/mainwindow.h

FORMS += \
    src/main/logIn.ui \
    src/main/mainwindow.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

unix:!macx: LIBS += -L$$PWD/lib/ -lmariadbcpp

QMAKE_LFLAGS += -Wl,-rpath=\$$PWD../lib,--disable-new-dtags

QMAKE_RPATHDIR =+ $$PWD/lib

INCLUDEPATH += $$PWD/lib
DEPENDPATH += $$PWD/lib
