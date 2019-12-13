#include <iostream>
#include <iomanip>

using namespace std;

#include "Client.h"



Client::Client(string nom/*=""*/, int numero/*=0*/)
{
   this->nom = nom;
   this->numero = numero;
}


string Client::getNom() const
{
   return nom;
}
void Client::setNom(string nom)
{
   this->nom = nom;
}
int Client::getNumero() const
{
   return numero;
}
void Client::setNumero(int numero)
{
   this->numero = numero;
}
void Client::ajouterCommande(const Commande &c)
{
   commandes.push_back(c);
}
void Client::supprimerCommande(int numero){
   
}

void Client::afficherCompte()
{
   for(unsigned i=0; i < commandes.size();i++)
   {
      commandes[i].afficher();
      cout << "\n";
   }
}


