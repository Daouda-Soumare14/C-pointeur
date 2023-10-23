#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main()
{
    double *pointeurA;
    //Un pointeur qui peut contenir l'adresse d'un nombre à virgule

    unsigned int *pointeurB;
    //Un pointeur qui peut contenir l'adresse d'un nombre entier positif

    string *pointeurC;
    //Un pointeur qui peut contenir l'adresse d'une chaîne de caractères

    vector<int> *pointeurD;
    //Un pointeur qui peut contenir l'adresse d'un tableau dynamique de nombres entiers

    int const *pointeurE;
    //Un pointeur qui peut contenir l'adresse d'un nombre entier constant


    // initialisation des pointeurs 0 ou nullptr
    int *pointeur(0);
    double *pointeurA(0); 
    unsigned int *pointeurB(nullptr);
    string *pointeurC(nullptr);
    vector<int> *pointeurD(0);
    int const *pointeurE(nullptr);
}


