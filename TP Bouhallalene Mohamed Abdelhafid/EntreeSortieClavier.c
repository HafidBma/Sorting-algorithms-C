#include "declarations.h"

// Affiche Les �l�ments de La Liste Sur L'�cran
void afficherListe (int *t, int n){
	//D�claration D'un Compteur
	int i;
	
	//Affiche Les �l�ments de La Liste Sur L'�cran Avec Tabulation
	for (i=1 ; i<=n ; i++)
		printf ("%10d\t", t[i]);
}
