#include <iostream>
#include <iomanip>

using namespace std;

#include "Catalogue.h"


Catalogue::Catalogue(string nom/*=""*/, string date/*=*/)
{
    this->nom = nom;
    this->date = date;
}

string Catalogue::getNom() const
{
    return nom;
}
void Catalogue::setNom(string nom)
{
    this->nom = nom;
}
string Catalogue::getDate() const
{
    return date;
}
void Catalogue::setDate(string date)
{
    this->date = date;
}

void Catalogue::ajouterArticle(Article *article)
{
    liste.push_back(article);
}
void Catalogue::supprimerArticle(string refArticle)
{
    for(unsigned int i=0; i < liste.size(); i++)
    {
        if (liste[i]->getTitre().compare(refArticle)==0)
        {
            cout << "on efface : " << refArticle << "/" << liste[i]->getTitre();
            liste.erase(liste.begin() + i);
            return;
        }

    }

}

void Catalogue::afficher()
{
    cout << setfill('-') << setw(80) << "\n";
    cout << "|" << setfill(' ') << setw(50) << nom << "\n";


    for(unsigned i=0; i < liste.size(); i++)
    {
        cout << setfill('-') << setw(80) << "\n";
        cout << "|" << setfill(' ') << setw(50) << liste[i]->getTitre();
        cout << "|" << setfill(' ') << setw(8) << liste[i]->getPrix() << "\n";
        cout << setfill('-') << setw(80) << "\n";
    }

}
