#ifndef COMPTE_H
#define COMPTE_H
#include <string>

class Compte{

private:
    int id;
    int client_id;
    double solde;

public:
    Compte(int id, int client_id, double solde);
    ~Compte();

    void AfficherSolde() const;

    int getId() const;
    int getClientId() const;
    double getSolde() const;

    void deposer(double montant);
    bool retirer(double montant);
};

#endif