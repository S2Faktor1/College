// Tento zdrojovy kod jsem vypracoval zcela samostatne bez cizi pomoci
// Neokopiroval jsem ani neopsal jsem cizi zdrojove kody 
// Nikdo me pri vypracovani neradil 
// Pokud nektery radek porusuje toto pravidlo je oznacen komentarem
// NENI MOJE TVORBA
// Poruseni techto pravidel se povazuje za podvod, ktery lze potrestat VYLOUCENIM ZE STUDIA
// Lukas Semecky 36991

// Uloha 3 cten� textu dokud nenarazi na pismeno x

#include <iostream>

int main()
{

    printf("Psan� libovoln�ho textu.\n"); 
    
    char slovo = 0;// Deklarace a inicializace prom�ne 

    while (slovo != 'x')// Cyklus While kter� bude hledat v na�em zadan�m parametru 'x'
    {
        slovo = getchar();// Zadani od u�ivatele 
        if (slovo == 'x')// pokud v prohled�n� narazi na x program kon�i
        {
            printf("\nDekuji za ucast,program konec\n");
            return 0;
        }
        printf("%c", slovo);// vypisuje se v�e dokud nenaraz� na x
    }
   
    return 0;
}