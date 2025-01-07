all: project

clean: project poliglotta.o italian.o english.o
	rm -f project main.o italian.o english.o

project: main.o italian.o english.o
	gcc -o project poliglotta.o italian.o english.o

plolgotta.o: poliglotta.c
	gcc -c -o poliglotta.o poliglotta.c

italian.o: italian.c
	gcc -c -o italian.o italian.c

english.o: english.c
	gcc -c -o english.o english.c 
