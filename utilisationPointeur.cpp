#include <iostream>
using namespace std;


int main()
{

}

/*
Utilisez des pointeurs dans les cas suivants

Gérer soi-même le moment de la création et de la destruction des cases mémoire.
//---------------------------------------------------------------------------------------

Cas 2 : Partager une variable dans plusieurs morceaux du code.


Quand il n'y a pas de combat en cours, le pointeur pointe vers l'adresse 0, il n'a pas de cible.

Quand le combat est engagé, le pointeur pointe vers un ennemi.

Enfin, quand cet ennemi meurt, on déplace le pointeur vers une autre adresse, c'est-à-dire vers un autre personnage.

Le pointeur est donc réellement utilisé ici comme une flèche reliant un personnage à son ennemi.
//---------------------------------------------------------------------------------------

Ca 3 : Sélectionner une valeur parmi plusieurs options.

Le troisième et dernier cas permet de faire évoluer un programme en fonction des choix de l'utilisateur.

Prenons le cas d'un QCM : nous allons demander à l'utilisateur de choisir parmi trois réponses possibles 
à une question. Une fois qu'il aura choisi, nous allons utiliser un pointeur pour indiquer quelle réponse a été sélectionnée.

*/