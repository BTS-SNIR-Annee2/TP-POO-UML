#include <iostream>
#include <iomanip>

using namespace std;

#include "Client.h"
#include "PortefeuilleClient.h"

int main()
{
   
   
   
   //création des clients
   Client client1("Thomas", 0001), client2("Rafion", 0002),
   client3("Maxime", 0003),client4("Remi", 0004);
   
   PortefeuilleClient portefeuille("Particuliers");
   
   portefeuille.ajouterClient(&client1);
   portefeuille.ajouterClient(&client2);
   portefeuille.ajouterClient(&client3);
   portefeuille.ajouterClient(&client4);
   
   portefeuille.afficher();

   
   
   
   
   
   return 0;
}
