// Tento zdrojovy kod jsem vypracoval zcela samostatne bez cizi pomoci
// Neokopiroval jsem ani neopsal jsem cizi zdrojove kody 
// Nikdo me pri vypracovani neradil 
// Pokud nektery radek porusuje toto pravidlo je oznacen komentarem
// NENI MOJE TVORBA
// Poruseni techto pravidel se povazuje za podvod, ktery lze potrestat VYLOUCENIM ZE STUDIA
// Lukas Semecky 36991

#include <iostream>
#include <stdio.h>
#include <conio.h>

// Uloha 1 Modulo pro re�ln� ��sla 

void Modulo(double prvni, double druhy)
{
    double zbytek=0;// int pro celo��seln� v�sledek 
    int vysledek = 0;// celo��seln� v�sledek
    vysledek = prvni / druhy;//v�sledek dvou realn�ch ��sel 

    zbytek = prvni - (vysledek * druhy);// zbytek po d�leni 

    printf("Modulo pro %2.2f / %2.2f = %2.2f\n", prvni, druhy, zbytek);// vyps�ni hodnoty %f na dv� desetin� m�sta
    
}


int main()
{
    double a = 0, b = 0; // float pro realn� ��sla
   
    a = 2.64;
    b = 1.2;
    Modulo(a, b);// vstup do funkce s hodnotami

    return 0;

}


