// Tento zdrojovy kod jsem vypracoval zcela samostatne bez cizi pomoci
// Neokopiroval jsem ani neopsal jsem cizi zdrojove kody 
// Nikdo me pri vypracovani neradil 
// Pokud nektery radek porusuje toto pravidlo je oznacen komentarem
// NENI MOJE TVORBA
// Poruseni techto pravidel se povazuje za podvod, ktery lze potrestat VYLOUCENIM ZE STUDIA
// Lukas Semecky 36991

// Cvi�en� 1 mal� nasobilka pomoci For cyklu.
#include <iostream>
#include <stdio.h>

int main()
{
	int x = 3,y=0;  //Inicializace a deklarace prom�n�ch 
	int i;

	if (x <= 0 || x > 10) return 1; //ov��en� dan�ho x v rozmez� 1-10 pro men�� nebo vet�� program skon��

	printf("Mala nasobilka pro cislo - %d\n", x);
	
	for (i = 1;i <= 10;i++)//For cyklus pro vypo�ty od 1 do 10 
	{
		//y = x * i; 
		printf("%d * %d = %d\n",x, i,x*i);// vypsan� na obrazovku
	}
	return 0;
}