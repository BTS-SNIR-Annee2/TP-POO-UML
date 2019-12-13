CFLAGS=-Wall
CC=g++ -g -c $(CFLAGS)
LD=g++ -g -o

all: testArticle testLigne testCommande testClient

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

Article.o: Article.cpp Article.h
	$(CC) $<

Ligne.o: Ligne.cpp Ligne.h
	$(CC) $<

Commande.o: Commande.cpp Commande.h
	$(CC) $<

Client.o: Client.cpp Client.h
	$(CC) $<


clean:
	rm -f testCommande testLigne testArticle testClient *.o *~

