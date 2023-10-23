#include <iostream>
using namespace std;


int main()
{
   int ageUtilisateur(16);
   int *ptr(0);  

   ptr= &ageUtilisateur;
	
   cout << "La valeur est :  " << *ptr << endl;   

   return 0;
}

/*

    Pour une variable int nombre  :

    nombre permet d'accéder à la valeur de la variable ;

    &nombre permet d'accéder à l'adresse de la variable.

    Sur un pointeur int *pointeur  :

    pointeur permet d'accéder à la valeur du pointeur, c'est-à-dire à l'adresse de la variable pointée ;

    *pointeur permet d'accéder à la valeur de la variable pointée.
*/