#include "declarations.h"
//Cette fonction trie le tableau t par ordre
//croissant en utilisant le tri par bulles
void triBulles (int *t, int n){
	int i, temp, permut, comp=0;
	permut = 1;
	while (permut){
		permut = 0;
		for (i=1 ; i<n ; i++)
			if (t[i] > t[i+1]){
				temp = t[i];
				t[i] = t[i+1];
				t[i+1] = temp;
				permut = 1;
				comp++;
			}
		n-- ;
	}
	printf("Nombre De Comparaison Est: %d\n\n",comp);
}
