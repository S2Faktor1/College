// Tento zdrojovy kod jsem vypracoval zcela samostatne bez cizi pomoci
// Neokopiroval jsem ani neopsal jsem cizi zdrojove kody 
// Nikdo me pri vypracovani neradil 
// Pokud nektery radek porusuje toto pravidlo je oznacen komentarem
// NENI MOJE TVORBA
// Poruseni techto pravidel se povazuje za podvod, ktery lze potrestat VYLOUCENIM ZE STUDIA
// Lukas Semecky 36991

#include <iostream>
#include <conio.h>
#include <stdio.h>
//Uloha_1 Set�idte pole minimem ( Bubblesort,margesort,quicksort..)
// Uloha _2 Najd�te medi�n v set��d�n�m poli

/*
int Bublinka(int pole[], int length)
{
    int i=0, j=0, temp=0;

    
    for (i = 0; i < length; i++)// Vnejsi cyklus pro kontrolu pole
    {
        
        for (j = 0; j < length - i; j++)// Vnitrni cyklus porovn�va prvky
        {
           
            if (pole[j] > pole[j + 1])// if pokud je cislo s indexem  vetsi nez n�sleduj�c� ,prvky se prohod�
            {
                temp = pole[j];
                pole[j] = pole[j + 1];
                pole[j + 1] = temp;
            }
        }
    }
    return 0;
}
*/

int quick(int pole[], int prvni, int posledni)
{
    int i =0, j = 0, pivot = 0, temp = 0;// deklarujeme prom�n� 

    if (prvni < posledni)// podminka pro nastaven� pivota neboli hodnoty se kterou budeme porovn�vat
    {
        pivot = prvni;// nastav�me pivota jako prvn� prvek s indexem 0
        i = prvni;// i = lev� pointer nastav�me na za��tek 
        j = posledni;// j = prav� pointer nastav�me na konec 

        while (i < j)// podminka pokud je lev� pointr men�� ne� prav� 
        {
            while (pole[i] <= pole[pivot] && i < posledni) i++;// posunuti lev�ho ukazatele 
            while (pole[j] > pole[pivot])j--;// posunuti prav�ho ukazatele 
            if (i < j)// potvrzen� podm�nky 
            {
                temp = pole[i];// prohazov�n� prvk� 
                pole[i] = pole[j];
                pole[j] = temp;

            }

        }

        temp = pole[pivot];// usazen� pivota na m�sto
        pole[pivot] = pole[j];
        pole[j] = temp;

        quick(pole, prvni, j - 1);// rekurzivn� vol�ni na prvky men�� nez pivot 
        quick(pole, j + 1, posledni);// rekurzivn� vol�n� na prvky vets� nez pivot 
    }


    return 0;
}
void median(int p2[], int delka)// funkce pro median
{
    int li = 0, pi = 0, p = 0;

    if (delka % 2 == 0)// pokud je pole se sud�m po�tem prvk� 
    {
        li = (delka-1) / 2;// najdeme lev� prvek (mus�me sn�it delku o 1)
        pi = li + 1;// najdeme prav� prvek
        //printf("%d", p2[li]);
        //printf("%d", p2[pi]);
        p = (p2[li] + p2[pi]) / 2;// spo�teme arytmetick� prum�r
    }
    else// pokud je lich� po�et median je prost�edn� prvek
    {
        p = delka / 2;
        p = p2[p];
    }
    printf("MEDIAN pro pole je %d\n", p);// v�pis

}
void vypispole(int p[], int delka)// vypis pole
{
    int i = 0;
    printf("pole\n");
    for (i = 0;i < delka;i++)printf("index %d -- %d\n", i, p[i]);

}

int main()
{   
    const int p = 8;
    int pole[p] = { 5, 28,3,11,1,8,16,9,};// inicializace pole

    /*vypispole(pole, p);
    Bublinka(pole, 0, p - 1);
    vypispole(pole, p);
    median(pole, p);*/


    vypispole(pole, p);
    quick(pole, 0, p - 1);
    vypispole(pole, p);
    median(pole, p);

    return 0;
}


