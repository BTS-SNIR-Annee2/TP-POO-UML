#include <iostream>
#include <string>

using namespace std;

#include "Article.h"

Article::Article(string titre, double prix)
{
   this->titre = titre;
   this->prix = prix;
}

string Article::getTitre() const
{
   return titre;
}
double Article::getPrix() const
{
   return prix;
}

void Article::setTitre(string titre)
{
   this->titre = titre;
}
void Article::setPrix(double prix)
{
   this->prix = prix;
}

