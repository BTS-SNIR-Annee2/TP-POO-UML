#include "Commande.h"

#ifndef CLIENT_H
#define CLIENT_H


#include <vector>

using namespace std;

class Commande;

class Client
{
private:
   string nom;
   int numero;
   vector<Commande> commandes;
public:
   Client(string nom="", int numero=0);
   
   string getNom() const;
   void setNom(string nom);
   
   int getNumero() const;
   void setNumero( int numero		);
   
   void ajouterCommande(const Commande &c);
   void supprimerCommande(int numero);
   
   void afficherCompte();
   
};

#endif // CLIENT_H
