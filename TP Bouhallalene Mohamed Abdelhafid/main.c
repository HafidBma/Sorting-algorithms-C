#include "declarations.h"

int main(int argc, char *argv[]) {
	menu();
}

void menu(){
	
	system("color 1F");    //Changer La Couleur Du Console D'affichage
	
	//Déclarations Des Variables
	char ver;
	int n, choixMenu, choixTri, copie[N], t[N];
	
	//Introduction
	printf("\n  (( \1 \1 \1 Bienvenue Dans Notre Petit Programme De Tri \1 \1 \1 ))\n\n");
	printf("Ce Programme Est Cree Par Bouhallalene Mohamed Abdelhafid ( Groupe 6 )\n\n");
	printf("Voici Le Menu:\n\n");
	
	START: //Point De Retour Si L'utilisateur Choisis De Retourner Au Menu Précedent
	system("color 1F");
	//Afficher Le Menu Pour Choisir La Liste A Trier
	printf("********************************************************************************");
	printf("////////////////////////////////////////////////////////////////////////////////");
	printf("********************************************************************************\n");
	printf("	1) Entrer Une Liste De Donnee A Trier: \n\n");
	printf("			1- Une Liste Existante \n\n");
	printf("			2- Entrer Une Nouvelle Liste !!!\n\n");
	printf("			3- Quitter !!!\n\n");
	printf("********************************************************************************");
	printf("////////////////////////////////////////////////////////////////////////////////");
	printf("********************************************************************************\n");
	
	//Recuperer Le Choix De L'utilisateur
	scanf("%d",&choixTri);
	
	//Traiter Les Cas Selon Le Choix
	switch(choixTri){
		case 1:
			system("color E1");
			//system("cls");//Cette Instruction Efface Les Affichages Effectuer Avant L'appel De La Fonction system()
			
			//Afficher Un Petit Menu Concernant Les Fichiers De Donnees
			printf("________________________________________________________________________________");
			printf("................................................................................");
			printf("________________________________________________________________________________");
			printf("Voici Les Fichiers Disponibles :\n\n ");
			printf("	a. fichierValeurs01.txt  (100 Elements) :\n\n");
			printf("	b. fichierValeurs02.txt  (200 Elements) :\n\n");
			printf("	c. fichierValeurs03.txt  (300 Elements) :\n\n");
			printf("________________________________________________________________________________");
			printf("................................................................................");
			printf("________________________________________________________________________________");
			
			//Appel De La Fonction Qui Retourne Le Nombre D'elements
			n=lireListe(t);
			
			//Si La Lecture À Èchouer L'Application Va Pauser 
			system ("PAUSE");
			
			//Retourner Au Menu Precedent Aprés L'èchec 
			//De L'ouverture Du Ficher De Données
			if(n==-1){
				system("cls");
				goto START;
			}
			break;
		case 2:
			//La Lecture D'une Nouvelle Liste De Donnees
			system("color 0A");
			n=lireNouvListe(t);
			break;
		case 3:
			system("cls");
			printf("\n  ((((++++---- Vous Quittez A Bientot !!! ----++++ ))))\n");
			//Aller Au Point De Fin Dans La Fonction Menu
			goto END;
		
		// Si L'utilisateur Entre Un Choix Non Existant Dans Les Cas Il Revient Au Debut Du Menu De Tir
		default: 
			printf("Votre Choix N'est Pas Dans Le Menu !!!\n\n");
			goto START;
	
	}
	do{
		system("color 1A");
		
		//Choisir Un Des Algorithmes De Tri
		//L'affichage Des Listes 
		//Retourner Au Debut
		//Quitter
		printf("\n\n#####################################################################\n\n");
		printf("####    	Choisissez Une Operation!!                       ####\n\n");
		printf("####			1) Tri Par Selection                     ####\n\n");
		printf("####			2) Tri Par Bulles                        ####\n\n");
		printf("####			3) Tri Par Insertion                     ####\n\n");
		printf("####			4) Afficher La Liste Non Triee           ####\n\n");
		printf("####			5) Afficher La Liste Triee               ####\n\n");
		printf("####			6) Retourner Au Menu Precedent           ####\n\n");
		printf("####			7) Quitter!!                             ####\n");
		printf("#####################################################################\n\n");

		
		//Recuperer Le Choix De L'utilisateur
		scanf("%d",&choixTri);
		switch(choixTri){
			//Le Premier Cas Concerne Le Tri Par Selection
			case 1:	
				copieListe(t,copie, n);  //Copier La Liste Dans Une Tableau
				triSelection(copie, n);  //Trier Le Tableau Copié
				sauvListeTrie(copie, n); //Sauvgarder La Liste Triée Dans Un Fichier Texte
				break;
			
			//Le Deuxième Cas Concerne Le Tri Par Bulles
			case 2:
				copieListe(t,copie, n);
				triBulles(copie, n);
				sauvListeTrie(copie, n);
				break;
			
			//Le Troisième Cas Concerne Le Tri Par Insertion
			case 3:
				copieListe(t,copie, n);
				triInsertion(copie, n);
				sauvListeTrie(copie, n);
				break;
			
			//Le Quatrième Cas Va Afficher La Liste Non Triée
			case 4:
				afficherListe (t, n);
				break;
			//Le Cinquième Cas Vas Afficher La Liste Triée
			case 5:
				afficherListe (copie, n);
				break;
				
			case 6:
				break;
				
			//Le Septième Cas Vas Sortir Du Menu
			case 7:
				printf("\n  ((((++++---- Vous Quittez A Bientot !!! ----++++ ))))\n");
				break;

			default :printf("Votre Choix N'est Pas Dans Le Menu\n");
		}
		
		
		//Le //Le Sixième Cas Va Retourner Au Menu Précdent
		if(choixTri==6){
			system("cls");
			goto START;
		}
		
		//Aller À La Fin Du Programme 
		if (choixTri==7)
			goto END;
	}while(choixTri>0 && choixTri<9);
	END:;
}
