#include "Compte.h"
#include <iostream>

Compte::Compte(int id, int client_id, double solde){
    this->id = id;
    this->client_id = client_id;
    this->solde = solde;
}

Compte::~Compte() {};

void Compte::AfficherSolde() const {
    std::cout << "Solde du compte: " << id << " : " << solde << std::endl;
}

int Compte::getId() const { return id; }
int Compte::getClientId() const { return client_id; }
double Compte::getSolde() const { return solde; }

void Compte::deposer(double montant){
    solde += montant;
}

bool Compte::retirer(double montant){
    if(montant > solde) return false;
    solde -= montant;
    return true;
}