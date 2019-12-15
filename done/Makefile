CFLAGS=-Wall
CC=g++ -g -c $(CFLAGS)
LD=g++ -g -o

all: testArticle testLigne testCommande testClient testCatalogue testPortefeuille

testArticle: testArticle.o Article.o
	$(LD) $@ $^

testArticle.o: testArticle.cpp Article.h
	$(CC) $<

testLigne: testLigne.o Article.o Ligne.o
	$(LD) $@ $^

testLigne.o: testLigne.cpp Article.h Ligne.h
	$(CC) $<

testCommande: testCommande.o Commande.o Article.o Ligne.o Client.o
	$(LD) $@ $^

testCommande.o: testCommande.cpp Commande.h Article.h Ligne.h Client.h
	$(CC) $<

testClient: testClient.o Client.o Commande.o Article.o Ligne.o
	$(LD) $@ $^

testClient.o: testClient.cpp Client.h Commande.h Article.h Ligne.h
	$(CC) $<

testPortefeuille: testPortefeuille.o Client.o Commande.o Ligne.o Article.o PortefeuilleClient.o
	$(LD) $@ $^

testPortefeuille.o: testPortefeuille.cpp PortefeuilleClient.h Client.h
	$(CC) $<

testCatalogue: testCatalogue.o Article.o Catalogue.o
	$(LD) $@ $^

Article.o: Article.cpp Article.h
	$(CC) $<

Ligne.o: Ligne.cpp Ligne.h
	$(CC) $<

Commande.o: Commande.cpp Commande.h
	$(CC) $<

Client.o: Client.cpp Client.h
	$(CC) $<

Catalogue.o: Catalogue.cpp Catalogue.h
	$(CC) $<

PortefeuilleClient.o: PortefeuilleClient.cpp PortefeuilleClient.h
	$(CC) $<

clean:
	rm -f testCommande testLigne testArticle testClient testCatalogue testPortefeuille *.o *~

