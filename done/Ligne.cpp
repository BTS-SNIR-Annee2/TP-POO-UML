#include <iostream>
#include <iomanip>

using namespace std;



#include "Ligne.h"
#include "Article.h" // accès à la déclaration complète de la classe Article (2)
Ligne::Ligne(Article *article, long quantite)
{
   this->article = article; // initialise la relation d’agrégation
   this->quantite = quantite;
}


Article * Ligne::getArticle() const
{
   return article;
}
long Ligne::getQuantite() const
{
   return quantite;
}
void Ligne::setArticle(Article *article)
{
   this->article = article;
}
void Ligne::setQuantite(long quantite)
{
   this->quantite = quantite;
}

double Ligne::getMontant() const
{
   return article->getPrix() * quantite;
}

void Ligne::afficher(){
   cout << setfill(' ') << setw(3) << quantite;
   cout << "|" << setfill(' ') << setw(50) << article->getTitre();
   cout << "|" << setfill(' ') << setw(8) << article->getPrix();
   cout << "|" << setfill(' ') << setw(15) << getMontant() << endl;
   cout << setfill('-') << setw(80) << "\n";
}
