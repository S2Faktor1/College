// Tento zdrojovy kod jsem vypracoval zcela samostatne bez cizi pomoci
// Neokopiroval jsem ani neopsal jsem cizi zdrojove kody 
// Nikdo me pri vypracovani neradil 
// Pokud nektery radek porusuje toto pravidlo je oznacen komentarem
// NENI MOJE TVORBA
// Poruseni techto pravidel se povazuje za podvod, ktery lze potrestat VYLOUCENIM ZE STUDIA
// Lukas Semecky 36991

// Cvièení 1 malá nasobilka pomoci For cyklu.
#include <iostream>
#include <stdio.h>

int main()
{
	int x = 3,y=0;  //Inicializace a deklarace promìných 
	int i;

	if (x <= 0 || x > 10) return 1; //ovìøení daného x v rozmezí 1-10 pro menší nebo vetší program skonèí

	printf("Mala nasobilka pro cislo - %d\n", x);
	
	for (i = 1;i <= 10;i++)//For cyklus pro vypoèty od 1 do 10 
	{
		//y = x * i; 
		printf("%d * %d = %d\n",x, i,x*i);// vypsaní na obrazovku
	}
	return 0;
}