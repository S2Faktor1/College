// Tento zdrojovy kod jsem vypracoval zcela samostatne bez cizi pomoci
// Neokopiroval jsem ani neopsal jsem cizi zdrojove kody 
// Nikdo me pri vypracovani neradil 
// Pokud nektery radek porusuje toto pravidlo je oznacen komentarem
// NENI MOJE TVORBA
// Poruseni techto pravidel se povazuje za podvod, ktery lze potrestat VYLOUCENIM ZE STUDIA
// Lukas Semecky 36991

// Uloha 5 Napi�te program, kter� pro dan� ��slo ur�� v�echny jeho d�litele.

#include <iostream>
#include <stdio.h>

int main()
{
	
	int i = 0,delitel=0,cislo =0;// inicializace s deklaraci prom�n�ch 

	cislo = 55; //deklarace cisla na hodnotu 

	printf("Zadali jste cislo %d: \n",cislo);
	

	if (cislo <= 100)// podm�nka pro max kter� pot�ebujeme ( nen� nutn�)
	{
		for (i = 1;i <= cislo;i++)// for cyklus pro hled�n� delitele 
		{
			delitel = cislo % i;
			if (delitel == 0)printf("cislo %d je delitelem\n", i);// pokud je cislo delitel tak se vyp�e 
			else continue;//pokud ne pokracuje se v programu 
		}

	}
	return 0;
}

