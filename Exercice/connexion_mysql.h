#ifndef CONNEXION_MYSQL_H
#define CONNEXION_MYSQL_H

#include "QSqlDatabase"
#include "QSqlQuery"

    static bool connexionBD()
    {
        QSqlDatabase BD=QSqlDatabase::addDatabase("QMYSQL");
        BD.setHostName("localhost");
        BD.setUserName("root");
        BD.setDatabaseName("gestion1");
        BD.setPort(3306);
        //BD.setPassword("");

        if(BD.open())
        {
            return true;
        }
        else
        {
            return false;
        }
    }

#endif // CONNEXION_MYSQL_H
