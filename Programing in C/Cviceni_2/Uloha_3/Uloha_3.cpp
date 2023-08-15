// Tento zdrojovy kod jsem vypracoval zcela samostatne bez cizi pomoci
// Neokopiroval jsem ani neopsal jsem cizi zdrojove kody 
// Nikdo me pri vypracovani neradil 
// Pokud nektery radek porusuje toto pravidlo je oznacen komentarem
// NENI MOJE TVORBA
// Poruseni techto pravidel se povazuje za podvod, ktery lze potrestat VYLOUCENIM ZE STUDIA
// Lukas Semecky 36991

// Uloha 3 ctení textu dokud nenarazi na pismeno x

#include <iostream>

int main()
{

    printf("Psaní libovolného textu.\n"); 
    
    char slovo = 0;// Deklarace a inicializace promìne 

    while (slovo != 'x')// Cyklus While který bude hledat v našem zadaném parametru 'x'
    {
        slovo = getchar();// Zadani od uživatele 
        if (slovo == 'x')// pokud v prohledání narazi na x program konèi
        {
            printf("\nDekuji za ucast,program konec\n");
            return 0;
        }
        printf("%c", slovo);// vypisuje se vše dokud nenarazí na x
    }
   
    return 0;
}