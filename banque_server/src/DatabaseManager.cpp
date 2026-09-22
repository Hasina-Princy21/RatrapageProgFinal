#include "DatabaseManager.h"
#include <stdexcept>
#include <string>

Databasemanager::DatabaseManager(){
    conn = mysql_init()
}