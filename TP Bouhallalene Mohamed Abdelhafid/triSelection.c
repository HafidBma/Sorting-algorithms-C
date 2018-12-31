#include "declarations.h"
//Cette Fonction Trie le tableau t par ordre 
//croissant en utilisant le tri par sélection
void triSelection (int *t, int n){
	int i, k, imax, temp, comp=0;
	for (k=n ; k>1 ; k--){
		// Rechercher le maximum
		imax = 1;
		for (i=2 ; i<=k ; i++){
			if (t[imax] < t[i])
				imax = i;
				//compter le nombre de comparaison
			comp++;
		}
		// Permuter
		temp = t[imax];
		t[imax] = t[k];
		t[k] = temp;
	}
	printf("Nombre De Comparaison Est: %d\n\n",comp);
}
