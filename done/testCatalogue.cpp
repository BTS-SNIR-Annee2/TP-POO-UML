#include <iostream>
#include <iomanip>

using namespace std;


#include "Article.h"
#include "Catalogue.h"

int main()
{

    // création des articles
    Article a1("Des fleurs pour Algernon", 15.50),
            a2("A Game of Thrones - Le Trone de fer, tome 2", 13.29),
            a3("Le Trone de fer, Tome 13 : Le Bucher d'un roi", 17.96),
            a4("Minority report", 10);


    //création des commandes
    Catalogue catalogue("Rentrée littéraire", "11/04/2013");

    catalogue.ajouterArticle(&a1);
    catalogue.ajouterArticle(&a2);
    catalogue.ajouterArticle(&a3);
    catalogue.ajouterArticle(&a4);
    cout << "Avant la suppressions:\n\n";
    catalogue.afficher();
    catalogue.supprimerArticle("Le Trone de fer, Tome 13 : Le Bucher d'un roi");
    cout << "Après la suppressions:\n\n";
    catalogue.afficher();

    return 0;
}
