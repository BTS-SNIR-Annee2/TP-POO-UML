#include <iostream>
#include <iomanip>

using namespace std;

#include "Commande.h"

Commande::Commande(string reference/*=""*/, string date/*=*/)
{
   this->reference = reference;
   this->date = date;
}

string Commande::getReference() const
{
   return reference;
}
void Commande::setReference(string reference)
{
   this->reference = reference;
}
string Commande::getDate() const
{
   return date;
}
void Commande::setDate(string date){
   this->date = date;
}
Ligne Commande::getLigne(int numero) const
{
   return liste[numero];
}
void Commande::setLigne(const Ligne &l)
{
   liste.push_back(l);
}

double Commande::getTotal()
{
   double total = 0.;
   for (unsigned i=0; i<liste.size(); i++){
      total += liste.at(i).getMontant();
   }
   return total;
}
int Commande::getNbArticles() const
{
   int nb = 0.;
   for (unsigned i=0; i<liste.size(); i++){
      nb += liste.at(i).getQuantite();
   }
   return nb;
}

void Commande::afficher(){
   
}
