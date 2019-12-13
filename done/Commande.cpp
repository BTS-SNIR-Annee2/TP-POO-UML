#include <iostream>
#include <iomanip>

using namespace std;

#include "Commande.h"
#include "Client.h"// accès à la déclaration complète de la classe Client




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

Client* Commande::getClient() const
{
   return client;
}
void Commande::setClient(Client *client)
{
   this->client = client;
}


void Commande::afficher(){
   cout << setfill('-') << setw(80) << "\n";
   cout << setfill(' ') << setw(50) << "Client: " << client->getNumero();
   cout << setfill('-') << setw(80) << "\n";
   cout << setfill(' ') << setw(3) << "Qte";
   cout << "|" << setfill(' ') << setw(50) << "Description";
   cout << "|" << setfill(' ') << setw(8) << "Prix uni";
   cout << "|" << setfill(' ') << setw(15) << "Total\n";
   cout << setfill('-') << setw(80) << "\n";
   
   for(unsigned i=0; i < liste.size();i++)
   {
      liste[i].afficher();
      cout << "\n";
   }
   
   cout << setfill('-') << setw(80) << "\n";
   cout << setfill(' ') << setw(2) << getDate();
   cout << setfill(' ') << setw(53) << getTotal() << " euros" << "\n";
   cout << setfill('-') << setw(80) << "\n";
   
}
