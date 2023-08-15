// Tento zdrojovy kod jsem vypracoval zcela samostatne bez cizi pomoci
// Neokopiroval jsem ani neopsal jsem cizi zdrojove kody 
// Nikdo me pri vypracovani neradil 
// Pokud nektery radek porusuje toto pravidlo je oznacen komentarem
// NENI MOJE TVORBA
// Poruseni techto pravidel se povazuje za podvod, ktery lze potrestat VYLOUCENIM ZE STUDIA
// Lukas Semecky 36991
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <stdio.h>
#include <conio.h>
#include <math.h>
using namespace std;

// Domácí uloha C_1 Kalkulacka

int main()
{
    int kal = 1;// podmínka pro vstup do cyklu

    while (kal == 1) // cyklus ktery na konci operace bud potvrdíme nebo ne 
    {
        int a = 0, b = 0, operace = 0, vysledek = 0; // Deklarace s inicializaci 
        double goneo = 0;// pro goneometrické funkce 
        printf("Zadejte cislo : ");
        scanf("%d", &a);
        //cout << "Zadejte cislo:" << endl;// zadaní cisal
        //cin >> a;
        printf("Vyberte operaci\n 1 Scitani\n 2 Odcitani\n 3 Deleni\n 4 Nasobeni\n 5 Sinus\n 6 Cosinus \n 7 Tangenc \n 8 Odmocnina\n");
        //cout << "Zadejte cislo operace " << endl;
        //cin >> operace;// zadáni operaci 
        scanf("%d", &operace);
        if (operace <= 4)// pokud jsou zakladni operace + - * /
        {
            printf("Zadejte druhe cislo: ");
            scanf("%d", &
                b);
            //cout << "Zadejte druhe cislo: " << endl;// zadaní druhého cisla
            //cin >> b;

            switch (operace)// switch pro urcitou operaci
            {
            case 1:
                vysledek = a + b;
                printf("%d + %d =%d\n", a, b, vysledek);
                break;
            case 2:
                vysledek = a - b;
                printf("%d - %d =%d\n", a, b, vysledek);
                break;
            case 3:
                vysledek = a / b;
                printf("%d / %d =%d\n", a, b, vysledek);
                break;
            case 4:
                vysledek = a * b;
                printf("%d * %d =%d\n", a, b, vysledek);
                break;
            }

        }
        else// goneometrické operace 
        {
            switch (operace)
            {
            case 5:
                goneo = sin(a);// výsledek float s desetin místem
                printf("SINUS %d je %f\n", a, goneo);
                break;
            case 6:
                goneo = cos(a);
                printf("COSINUS %d je %f\n", a, goneo);
                break;
            case 7:
                goneo = tan(a);
                printf("TANGENC %d je %f\n ", a, goneo);
                break;
            case 8:
                goneo = sqrt(a);
                printf("DRUHA ODMOCNINA %d je %f\n", a, goneo);
                break;
            }

        }

        if (kal == 1)// podminka pokud budeme chtít zadat nové hodnoty nebo ukoncit 
        {
            cout << "Pro pokracovani zadejte 1 pro ukonceni 2: " << endl;
            cin >> kal;
        }


    }

    return 0;
}

