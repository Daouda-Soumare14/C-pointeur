#include <iostream>
using namespace std;

int main()
{
    // On doit juste se rappeler qu'il faut y accéder par le pointeur, en le déréférençant. 
    int *pointeur(0);
    pointeur = new int;

    *pointeur = 2;  //On accède à la case mémoire pour en modifier la valeur

    cout << *pointeur << endl;

    delete pointeur;
    pointeur = 0;  //On indique que le pointeur ne pointe plus vers rien

    cout << *pointeur << endl;
}