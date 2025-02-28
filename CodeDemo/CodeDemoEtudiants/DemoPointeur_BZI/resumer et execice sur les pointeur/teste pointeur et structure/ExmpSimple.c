#include <stdio.h>
struct str_demo {
	char character;
	short *pt_demo;
	int tb_entier[5];
};

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

		+		&nombre	0x000000705c93fcd4 {0x00000000}	int *

*/

void change_nombre(int *pt_nb) { // on d�clare notre pointeur il a rien pour le moment
	
	*pt_nb = 15;
	printf("Adresse du pointeur : %p\n ",&pt_nb); 
	printf("Adresse pointee : %p\n ",pt_nb);
	printf("valeur Adresse pointee %d\n : ",*pt_nb);

}
int *change_pointeur(void) {

	static int nombre = 10; // le static est utilis� pour que la valeurs soit concerver apr�s la fonction
	int *pt_nb = &nombre;
	printf("Adresse du pointeur : %p\n ", &pt_nb);
	printf("Adresse pointee : %p\n ", pt_nb);
	printf("valeur Adresse pointee %d\n : ", *pt_nb);

	return pt_nb;
}

void change_structur(struct str_demo *pt_str) {

	static short philou = 5;

	pt_str->character = 'A'; //'A' 65 veut dire A on nombre ASCII
	pt_str->pt_demo = &philou;
	for (philou = 0; philou < 5; philou++) {
		pt_str->tb_entier[philou]=philou;
	}

}

int main(void) {

	int nombre = 0; // la valeur du pointeur est �gale � l'adresse du nombre
	int* pt_test;
	struct str_demo demo;
	 change_structur(&demo);

	printf("la taille de ma structur = %d", sizeof(struct str_demo));
	printf("adresse de nombre = %p\n", &nombre); //afficher des adresse op�rateur est %p 
	printf("nombre = %d\n", nombre);
	change_nombre(&nombre); // je suis oblig� de lui donner une adresse 
	printf("nombre = %d\n", nombre);
	/**********************************************************************************/
	printf("\n\n\n adresse du pointeur = %p\n", &pt_test);
	printf(" adresse point�e = %p\n", pt_test);
	//printf("valeur point�e = %d\n", *pt_test); // %d car on veut une valeur
	pt_test = change_pointeur(); // l'information va dans pt_test
	/*********************************************************************************/
	printf("\n\n\n adresse du pointeur = %p\n", &pt_test);
	printf(" adresse point�e = %p\n", pt_test);
	printf("valeur point�e = %d\n", *pt_test);// %d car on veut une valeur
	return 0;

}