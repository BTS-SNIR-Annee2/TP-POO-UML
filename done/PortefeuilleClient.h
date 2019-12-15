#ifndef PORTEFEUILLECLIENT_H
#define PORTEFEUILLECLIENT_H


#include <vector>

using namespace std;

#include "Client.h"


class PortefeuilleClient
{
   private:
      string nom;
      vector<Client*> liste;


   public:
      PortefeuilleClient(string nom="");

      string getNom() const;
      void setNom(string reference);

      void ajouterClient(Client *client);
      void supprimerClient(string nom);

      void afficher();
};

#endif //CATALOGUE_H
