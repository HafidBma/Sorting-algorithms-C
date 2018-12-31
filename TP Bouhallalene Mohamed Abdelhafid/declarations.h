#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>
#include <time.h>
#include <errno.h>
#define N 500

//Les Prototypes Des Fonctions
void menu(void);
void triSelection (int *, int);
void triBulles (int *, int );
void triInsertion (int *, int);
int lireListe (int *);
int lireNouvListe(int *);
void copieListe(int *,int*, int);
void sauvListeTrie(int *, int );
void afficherListe (int *, int);
