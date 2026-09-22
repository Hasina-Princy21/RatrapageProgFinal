#ifndef DATABASEMANAGER_H
#define DATABASEMANAGER_H

#include <mysql/mysql.h>
#include "Client.h"
#include "Compte.h"

class DatabaseManager{

private: 
    MYSQL* conn;
    DatabaseManager(); //constructeur prive singleton
    DatabaseManager(const DatabaseManager&) = delete; //interdit la copie un seul doit exister

public:
    static DatabaseManager& getInstance();
    ~DatabaseManager();


};

#endif