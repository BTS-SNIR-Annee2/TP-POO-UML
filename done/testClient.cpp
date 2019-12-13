#include <iostream>
#include <iomanip>

using namespace std;

#include "Client.h"
#include "Commande.h"
#include "Ligne.h"
#include "Article.h"

int main()
{
   
   // création des articles
   Article a1("Des fleurs pour Algernon", 15.50),
   a2("A Game of Thrones - Le Trone de fer, tome 2", 13.29),
   a3("Le Trone de fer, Tome 13 : Le Bucher d'un roi", 17.96),
   a4("Minority report", 10);
   
   
   //création des commandes
   Commande c1("A00001", "11/04/2013"), c2("A00002", "11/04/2013"),
              c3("A00003", "12/04/2013"),c4("A00004", "12/05/2013");
   
   //création des clients
   Client client1("Thomas", 0001), client2("Rafion", 0002),
              client3("Maxime", 0003),client4("Remi", 0004);

   //création Commande 1
   Ligne c1L1(&a1, 5), c1L2(&a4, 5), c1L3(&a3, 2);
   c1.setLigne(c1L1);
   c1.setLigne(c1L2);
   c1.setLigne(c1L3);
   // Association au client
   c1.setClient(&client1);
   client1.ajouterCommande(c1);
   
   //création Commande 2
   Ligne c2L1(&a2, 1), c2L2(&a4, 3), c2L3(&a3, 2);
   c2.setLigne(c2L1);
   c2.setLigne(c2L2);
   c2.setLigne(c2L3);
   // Association au client
   c2.setClient(&client1);
   client1.ajouterCommande(c2);
   
//   c1.afficher();
//   cout << endl;
//   c2.afficher();
   client1.afficherCompte();
   
   
   return 0;
}
