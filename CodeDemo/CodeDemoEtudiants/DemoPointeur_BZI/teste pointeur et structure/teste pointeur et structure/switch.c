#include <stdio.h>

/*
Exemple avec une inversion de nombre les pointeurs nous permette de ne pas passer par les returns pour aller chercher les valeur de A et de B
		je travail directement sur l'adresse de la donn�e 
		les pointeurs permette de modifier les donn�es dans une fonction

	pointeur : variable contenant l'adresse d'une autre variable

	%d -> affiche une adresse de variable ou pointeur

	[VARIABLE]
		maVariable : valeur de la variable
		&maVariable : adresse de la variable

	[POINTEURS]
		*monPointeur = NULL ou *monPointeur = &maVariable 
		(d�claration et initialisation d'un pointeur)

		monPointeur : adresse de la variable point�e 
		*monPointeur : valeur de la variable point�e
		&monPointeur : adresse du pointeur
*/
/*
void inverser_nombre(int *pt_nb1,int *pt_nb2) { // ici on utilise * pour en faire des poiteurs attention ne pas oublier les types
	
	int temporaire = 0; //B
	
	temporaire =*pt_nb2;
	*pt_nb2= *pt_nb1;
	*pt_nb1 = temporaire;
}

int main(void) {

	int nombreA = 15;
	int nombreB = 28;

	int *PointeurSurNombreA = &nombreA; // on stock l'adresse de nombreA d'ou le & c'est l'initialisation du pointeur que la sytaxe est particuli�re
	int *PointeurSurNombreB = &nombreB;

	//printf("adresse de nombreB = %p\n", &nombreB);
	printf("AVANT : A = %d et B = %d\n", nombreA, nombreB);
	inverser_nombre(PointeurSurNombreA, PointeurSurNombreB); // passage par adresse l� on veut juste l'adresse de la variable point� donc le nom tout court
	printf("APRES : A = %d et B = %d\n", nombreA, nombreB);

	return 0;
}*/