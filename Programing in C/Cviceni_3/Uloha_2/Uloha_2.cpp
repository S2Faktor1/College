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

// Uloha 2 z uveden�ch hodnot spo�te pr�m�r a najde nejvet�� t�et� prvek

int prvek(int pole[], int delka, int nej)// pro pole s men��mi hodnotami 
{
    int iterace = 0,i=0;// deklarace s inicializac�

    while (iterace < 2)// cyklus preo hled�n� 3 nejmen��ho prvku
    {
        nej = nej + 1;// um�l� nav��en� minim�ln� hodnoty

            for (i = 0;i < delka;i++)// proch�zen� pole
            {

                if (pole[i] == nej)// pokud naraz� na 2 nejmen�� prvek 
                {
                    nej = pole[i];
                    iterace++;// zvet�en� iterace 
                    break;
                }
                else continue;
            }
    }

    return nej;// vracen� hodnota prvku
}

int main()
{ 
    const int p = 7;//velikost pole == Const prom�n� a hodnota nen� mo�n� upravit
    int pole[p] = {1, 2, 8, 12, 1, 45, 11};// inicializace pole 
    double arprumer = 0;// Pro aritmeticky prum�r 
    int nejmensi = 1,hledane=0,i=0;

    for (i = 0; i < p; i++)// For cyklus na hled�ni prum�ru
    {
       if(pole[i] <= nejmensi)nejmensi = pole[i];// Hled�ni nejmen��ho prvku 
        arprumer = pole[i] + arprumer;

    }
    arprumer = arprumer / p;// aritmetick� prum�r

    printf("Aritmeticky prumer je %2.2f\n", arprumer);

    hledane = prvek(pole, p,nejmensi);// vstup do funkce pro hled�n� prvku

    printf("Treti nejvetsi cislo je %d\n", hledane);

    return 0;
}


