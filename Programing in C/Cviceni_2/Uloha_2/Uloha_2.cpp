// Tento zdrojovy kod jsem vypracoval zcela samostatne bez cizi pomoci
// Neokopiroval jsem ani neopsal jsem cizi zdrojove kody 
// Nikdo me pri vypracovani neradil 
// Pokud nektery radek porusuje toto pravidlo je oznacen komentarem
// NENI MOJE TVORBA
// Poruseni techto pravidel se povazuje za podvod, ktery lze potrestat VYLOUCENIM ZE STUDIA
// Lukas Semecky 36991

// Uloha 2 - Zadaním èisla vypíše program daný mìsíc

#include <iostream>
#include <stdio.h>
#include <conio.h>

int main()
{
   
    printf("Zadejte cislo od 1-12: ");
    char mesic = getchar();

    if (mesic < '1')return 1;

   switch (mesic)// Switch pro mìsíc ktery se vypíše 
   {
    case '1':
       printf("%c mesic je Leden\n",mesic);
       break;
    case '2':
       printf("%c mesic je Unor\n",mesic);
       break;
    case '3':
       printf("%c mesic je Brezen\n",mesic);
       break;
    case '4':
       printf("%c mesic je Duben\n",mesic);
       break;
    case '5':
       printf("%c mesic je Kveten\n",mesic);
       break;
    case '6':
       printf("%c mesic je Cerven\n",mesic);
       break;
    case '7':
       printf("%c mesic je Cervenec\n",mesic);
       break;
    case '8':
       printf("%c mesic je Srpen\n",mesic);
       break;
    case '9':
       printf("%c mesic je Zari\n",mesic);
       break;
   }
  
            return 0;
}


