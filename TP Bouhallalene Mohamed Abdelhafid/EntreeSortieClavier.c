#include "declarations.h"

// Affiche Les Éléments de La Liste Sur L'écran
void afficherListe (int *t, int n){
	//Déclaration D'un Compteur
	int i;
	
	//Affiche Les Éléments de La Liste Sur L'écran Avec Tabulation
	for (i=1 ; i<=n ; i++)
		printf ("%10d\t", t[i]);
}
