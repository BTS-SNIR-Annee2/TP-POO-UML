#include <iostream>
#include <iomanip>

using namespace std;

#include "PortefeuilleClient.h"


PortefeuilleClient::PortefeuilleClient(string nom/*=""*/)
{
    this->nom = nom;
}

string PortefeuilleClient::getNom() const
{
    return nom;
}
void PortefeuilleClient::setNom(string nom)
{
    this->nom = nom;
}


void PortefeuilleClient::ajouterClient(Client *client)
{
    liste.push_back(client);
}
void PortefeuilleClient::supprimerClient(string nom)
{
    for(unsigned int i=0; i < liste.size(); i++)
    {
        if (liste[i]->getNom().compare(nom)==0)
        {
            liste.erase(liste.begin() + i);
            return;
        }

    }

}

void PortefeuilleClient::afficher()
{
    cout << setfill('-') << setw(80) << "\n";
    cout << "|" << setfill(' ') << setw(50) << nom << "\n";


    for(unsigned i=0; i < liste.size(); i++)
    {
        cout << setfill('-') << setw(80) << "\n";
        cout << "|" << setfill(' ') << setw(50) << liste[i]->getNom();
        cout << "|" << setfill(' ') << setw(8) << liste[i]->getNumero() << "\n";
        cout << setfill('-') << setw(80) << "\n";
    }

}
