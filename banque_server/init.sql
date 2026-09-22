CREATE DATABASE banque_db;
USE banque_db;

CREATE TABLE clients(
    id INT AUTO_INCREMENT PRIMARY KEY,
    nom VARCHAR(50) NOT NULL,
    prenom VARCHAR(50) NOT NULL,
    email VARCHAR(80) NOT NULL
);

CREATE TABLE compte(
    id INT AUTO_INCREMENT PRIMARY KEY,
    client_id INT NOT NULL,
    solde DOUBLE NOT NULL DEFAULT 0,
    FOREIGN KEY (client_id) REFERENCES clients(id)
);