#ifndef CATALOGUE_H
#define CATALOGUE_H


#include <vector>

using namespace std;

#include "Article.h"


class Catalogue
{
   private:
      string nom;
      string date;
      vector<Article*> liste;


   public:
      Catalogue(string nom="", string date="");

      string getNom() const;
      void setNom(string reference);
      string getDate() const;
      void setDate(string date);
      void ajouterArticle(Article *article);
      void supprimerArticle(string refArticle);

      void afficher();
};

#endif //CATALOGUE_H
