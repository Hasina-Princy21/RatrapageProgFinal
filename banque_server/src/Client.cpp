#include "Client.h"

Client::Client(int id, std::string nom, std::string prenom, std::string email){
    this->id = id;
    this->nom = nom;
    this->prenom = prenom;
    this->email = email;
}

Client::~Client() {}

int Client::getId() const { return id; }
std::string Client::getNom() const { return nom; }
std::string Client::getPrenom() const { return prenom; }
std::string Client::getEmail() const { return email; }