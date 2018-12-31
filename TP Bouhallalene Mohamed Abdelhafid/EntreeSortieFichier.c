#include "declarations.h"

// Cette Fonction Lit Un Tableau De Données À Partir D'un 
// Fichier Texte Et Retourne Le Nombre D'éléments Lus 
// Elle Retourn -1 En Cas D'erreur

int lireListe (int *t){	
	//Déclaration
	int n, i;
	FILE *fichier=NULL;
	char nomfichier [N];
	system("color 0B");
	// Lire Le Nom Du Fichier
	printf ("\nDonner Le Nom Du Fichier ( LECTURE ) :\n\n");
	scanf ("%s", nomfichier);
	fichier = fopen (nomfichier, "r");
	
	// Vérifier L'ouverture Du Ficher Texte
	if (fichier == NULL){
		printf ("\n Erreur d'ouverture du fichier: %d ",errno);
		printf("%s\n\n",strerror(errno));
	return -1;
	}
	printf ("\n Fichier \"%s\" Ouvert Avec Succes\n\n", nomfichier);
	
	// Lire Le Nombre D'éléments Dans Le Fichier
	fscanf (fichier, "%d", &n);
	
	// Lire Les Éléments De La Liste
	for (i=1 ; i<=n ; i++)
		fscanf (fichier, "%d", &t[i]);
	
	// Fermeture Du Fichier Après Traitement
	fclose(fichier);
	
	//Retourne Le Nombre D'éléments
	return n;
}

//Cette Fonction Permet L'utilisateur D'inserer Une Nouvelle 
//Liste A Trier Et Elle Sauvgarde Cette Liste Dans Un Fichier Texte
//Elle Retourne Le Nombre D'éléments Introduit Par L'utilisateur

int lireNouvListe(int *t){
	//Déclarations
	int n, i, j=0, nb;
	FILE *fichier=NULL;
	char nomfichier [N];
	
	//Nommer Le Nouveau Fichier De Données
	system("cls");
	system("color B1");
	printf("Nommer Le Nouveau Fichier De Donnees ( ECRITURE )???\n\n");
	scanf ("%s", nomfichier);
	fichier = fopen (nomfichier, "w");
	//Verifier La Création Du Fichier
	if (fichier == NULL){
		printf ("\n Erreur D'ouverture Du Fichier: %d ",errno);
		puts (strerror(errno));
	return EXIT_FAILURE;
	}
	printf ("\n Fichier ( %s ) Ouvert Avec Succes !!\n\n",nomfichier);
	
	//Récuperer Le Nombre D'éléments Introduit Par L'utilisateur
	printf("Donnez Le Nombre D'elements:\n");
	scanf("%d",&n);
	
	//Sauvgarder Le Nombre D'éléments Dans Le Fichier Texte
	fprintf(fichier,"%d\n",n);
	
	//Permetre À L'utilisateur D'introduire Une Liste De Données
	//Et Sauvgarder Les Valeurs Dans Le Fichier Texte
	printf("Combien D'elements Par Lignes ??\n");
	scanf("%d",&nb);
	printf("Remplissez Le Fichier Par Des Valeurs:\n");
	for (i=1 ; i<=n ; i++){
		scanf ("%d", &t[i]);
		fprintf(fichier, "%10d",t[i]);
		j++;
		if(j==nb){
			fprintf(fichier,"\n");
			j=0;
		}
	}
	
	// Fermeture Du Fichier Après Traitement
	fclose(fichier);
	
	printf("\n");
	
	//Retourner Le Nombre D'éléments Du Nouvelle Liste
	return n;
}

//Cette Fonction Copie La Liste Originale Dans Un Autre Tableau
//Pour Pouvoir Traiter L'original Avec Plusieurs Algorithmes De Tri
//L'utilisateur Peut Afficher Le Tableau Lu 
void copieListe(int *t,int *copie, int n){
	//Déclaration D'un Compteur
	int i;
	
	//Copier Élément Par Élément
	for(i=1;i<=n;i++)
		copie[i]=t[i];
}

//Cette Fonction Sauvgarde Une Liste Triée Dans Un Fichier Texte
//Le Nom Du Fichier Est Choisi Par L'utilisateur
void sauvListeTrie(int *t, int n){
	
	//Déclarations
	char m[N];
	int  i, j=0, nb;
	FILE *fichier=NULL;
	
	system("color FC");
	printf("Tapez Le Nom De Fichier De Sauvgarde ( ECRITURE ):\n");
	scanf("%s",&m);
	fichier = fopen (m, "w");
	if (fichier == NULL){
		printf ("\n Erreur D'ouverture Du Fichier: %d ",errno);
		puts (strerror(errno));
	}
	printf ("\n Fichier ( %s ) Ouvert Avec Succes !!!\n\n ",m);
	printf("Combien De Valeurs Par Lignes ??\n\n");
	scanf("%d",&nb);
	for (i=1 ; i<=n ; i++){
			fprintf(fichier,"%10d",t[i]);
			j++;
			if(j==nb){
				fprintf(fichier,"\n");
				j=0;
			}
	}
	// Fermeture Du Fichier après Traitement
	fclose (fichier);
}
