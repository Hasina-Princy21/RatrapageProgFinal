#ifndef CLIENT_H
#define CLIENT_H
#include <string>

class Client{

private:
    int id;
    std::string nom; 
    std::string prenom; 
    std::string email; 

public: 
    Client(int id, std::string nom, std::string prenom, std::string email);
    ~Client();

    int getId() const;
    std::string getNom() const;
    std::string getPrenom() const;
    std::string getEmail() const;
};

#endif