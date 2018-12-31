#include "declarations.h"
// trie le tableau t par ordre croissant
// en utilisant l'algorithme de tri par insertion
void triInsertion (int *t, int n){
	int i, r, comp=0;
	t[0] = -999999999;
	for (i=1; i<n ; i++){
		r = t[i+1];
		// t[1], t[2], ……., est une liste triée par ordre croissant
		//r est la valeur À insérer
		while (r < t[i]){
			t[i+1] = t[i];
			i--;
			comp++;
		}
		t[i+1] = r;
	}
	printf("Nombre De Comparaison Est: %d\n\n",comp);
}
