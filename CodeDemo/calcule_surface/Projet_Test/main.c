
//-----------------------------------------------------------------------------------//
// Nom du projet 		: Demo
// Nom du fichier 		: Projet_Test
// Date de création 	: 
// Date de modification : 
//
// Auteur 				: VolutedPenny235
//
// Version				: 0.0
//
// Description          : oui
//----------------------------------------------------------------------------------//
#include "main.h"


void main(void)
{
    int touche;
    char  Forme [20];
    static float resultat = 0;
    ptrGbl = &resultat;         //pointeur globale pointe sur resultat

    while (1)
    {
        printf("selectionner une forme : ");        //afficher
        scanf_s("%20s", Forme, (unsigned)_countof(Forme));   //lecture du clavier et écrire une chaine de caratères dans le tableau Forme

        if (strcmp(Forme, "list") == 0)
        {
            printf("-carre \n-rectangle \n-triangle \n-cercle");
        }
        else if (strcmp(Forme, "carre") == 0)        //comparer la chaine de caractère "carre" au tableau Forme et si la différence vaut 0 alors dans le tableau y as le mot "carre"
        {
            printf("\nentree la longueur du %s : ", Forme);
            carre();                             //appel de la fonction pour calculer la surface du carrer
        }
        else if (strcmp(Forme, "rectangle") == 0)    //comparer la chaine de caractère "rectangle" au tableau Forme et si la différence vaut 0 alors dans le tableau y as le mot "rectangle"
        {
            printf("\nentree la longueur et la hauteur du %s : ", Forme);
            rectangle();                         //appel de la fonction pour calculer la surface du rectangle
        }
        else if (strcmp(Forme, "triangle") == 0)     //comparer la chaine de caractère "triangle" au tableau Forme et si la différence vaut 0 alors dans le tableau y as le mot "triangle"
        {
            printf("\nentree la base et la hauteur du %s : ", Forme);
            triangle();                      //appel de la fonction pour calculer la surface du triangle
        }
        else if (strcmp(Forme, "cercle") == 0)   //comparer la chaine de caractère "cercle" au tableau Forme et si la différence vaut 0 alors dans le tableau y as le mot "cercle"
        {
            printf("\nentree le rayon du %s : ", Forme);
            cercle();                            //appel de la fonction pour calculer la surface du cercle
        }
        else                                        //si l'utilisateur a entree une chaine de carrctères non répertorier 
        {
            printf("la forme saisie ne correspond pas a l assortiment");
        }

        if (resultat != 0)
            printf("\nla surface du %s est de = %f", Forme, resultat);  //afficher le résultat du calcule en fonction de la forme selctionner 

        while (1)
        {
            if (_kbhit()) {         //fonction lier à la librairie conio.h pour lire n'importe quelle touche presser du clavier
                touche = _getch();  // Lire la touche
                if (touche != 0) {  //si une touche est presser
                    break;  // Quitter la boucle et terminer le programme
                }
            }
        }

        if (touche == 27)// Si la touche est 'Échap' (Escape), code ASCII 27
            break;              //fin du programme

        CLEAR;

    }
}
