#include <iostream>
#include <string>
using namespace std;

int main()
{
    string reponseA, reponseB, reponseC;
    reponseA = "c'est une variable";
    reponseB = "c'est une constante";
    reponseC = "c' est une variable contenant l'adresse d'une autre variable";

    cout << "Qu'est-ce q'un pointeur ? " << endl; //On pose la question
    cout << "A) " << reponseA << endl; //Et on affiche les trois propositions
    cout << "B) " << reponseB << endl;
    cout << "C) " << reponseC << endl;

    char reponse;
    cout << "Votre reponse (A,B ou C) : ";
    cin >> reponse; //On récupère la réponse de l'utilisateur

    string *reponseUtilisateur(0); //Un pointeur qui pointera sur la réponse choisie
    switch(reponse)
    {
    case 'A':
        reponseUtilisateur = &reponseA; //On déplace le pointeur sur la réponse choisie
        break;
    case 'B':
        reponseUtilisateur = &reponseB;
        break;
    case 'C':
        reponseUtilisateur = &reponseC;
        break;
    }

    //On peut alors utiliser le pointeur pour afficher la réponse choisie
    cout << "Vous avez choisi la reponse : " << *reponseUtilisateur << endl;

    return 0;
}