// Tento zdrojovy kod jsem vypracoval zcela samostatne bez cizi pomoci
// Neokopiroval jsem ani neopsal jsem cizi zdrojove kody 
// Nikdo me pri vypracovani neradil 
// Pokud nektery radek porusuje toto pravidlo je oznacen komentarem
// NENI MOJE TVORBA
// Poruseni techto pravidel se povazuje za podvod, ktery lze potrestat VYLOUCENIM ZE STUDIA
// Lukas Semecky 36991
#define _CRT_SECURE_NO_WARNINGS // bez toho mi nefunguje kopirov�n� strcpy!
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char* muj_strcpy(char* p, char* p1)// funkce pro kopirov�ni retezce
{
	strcpy(p, p1);// kopirovan� retezec

	return p;// vracim p�ekop�rovan� pole
}
int muj_strlen(char* pole1)// funkce pro d�lku �etezce 
{

	int i = 0;
	
	for (i = 0;pole1[i] != '\0';i++);// for cyklus s podm�nkou pokud se zrovna prvek nenach�z� na konci
	
	return i;// vrac�m po�et iterac� 
}
int main()
{
	int x = 0;
	char kopirka[11];
	char pozdrav[] = "Ahoj svete";

	x= muj_strlen(pozdrav);// pocet iterac� = velikost retezce 
	char * kopie = muj_strcpy(kopirka, pozdrav);// vrac�m p�ekop�rovany �et�zec 
	printf("Delka retezce je %d\n",x);
	printf("%s\n", kopie);// vyps�n� �etezce
	
	return 0;
}

