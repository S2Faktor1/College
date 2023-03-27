// Tento zdrojovy kod jsem vypracoval zcela samostatne bez cizi pomoci
// Neokopiroval jsem ani neopsal jsem cizi zdrojove kody 
// Nikdo me pri vypracovani neradil 
// Pokud nektery radek porusuje toto pravidlo je oznacen komentarem
// NENI MOJE TVORBA
// Poruseni techto pravidel se povazuje za podvod, ktery lze potrestat VYLOUCENIM ZE STUDIA
// Lukas Semecky 36991

/* Uloha_6 DOM8C9 �KOL cel� cvicen� 1-5
         
         1. Alokujte prostor pto matici  n*m
         2. Funkce pro NSN a NSD
         3. Funkce kter� do ka�deho prvku matice ulo�� v�sledek funkce se dv�ma parametry int vracejici int
         4. Program s parametry (NSN a NSD) kter� spo�te v�echny uspo��dan� dvojice �isel v matici
         5. V�pis matice na obrazovku

*/

#define _CRT_SECURE_NO_DEPRECATE
#include <iostream>
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <malloc.h>

void NSN(int x, int y)// Funkce (lze pro v�po�et pou�it i funkci NSD (x*d/NSD)
{
    int i = 0, nsn=0,pointer=1,tmp1=0,tmp2=0;

    tmp1 = tmp1 + x;// pomocn� prom�n� pro spolecn� n�sobek
    tmp2 = tmp2 + y;
    
    for (i = 0;pointer != 0;i++)// for pro hled�n� 
    {

        if (tmp1 < tmp2 )// podminka pokud je prvn� hodnota mensi 
        {
           tmp1 = tmp1+x;// zv�sime o x
           
           if (tmp1 == tmp2)pointer=0;// pokud nen� podm�nka splnena pokracujeme (misto pointeru lze pouzit break)
           else continue;

        }
        else//zvysov�n� druh� hodnoty
        {   
            tmp2 = tmp2 + y;

            if (tmp2 == tmp1)pointer=0;
            else continue;
        }
    }
   // printf("Nejmensi spolecni nasobek cisel (%d,%d) je %d \n", x, y,tmp1);// v�pis
     printf("%d\n", tmp1);
}
void NSD(int x, int y)// Nejvetsi spolecni delitel za pouzit� Euklida
{
    int podminka = 0, tmp1 = 0,tmp2=0;
    //printf("Nejvetsi spolecni delitel cisel  (%d,%d) je ",x,y);

    if (x < y)// Podminka pokud je prvn� hodnota mensi nez druha prohodime hodnoty
    {
        tmp1 = x;
        x = y;
        y = tmp1;
    }

    while (podminka != 1)// Cyklus pro euklida
    {

        tmp2 = x % y;// deleni se zbytkem 

        if (tmp2 == 0)podminka = 1;// pokud 0 nasli jsem NSD 
        else// nov� hodnoty deleni 
        {
            x = y;
            y = tmp2;
        }

    }

    printf(" %d\n", y);// vypis
}
int funkceplneni(int* p_a, int* p_b,int scitac)// Funkce pro nappn�n� matice
{
    int vysledek = 0;

    if (scitac % 2 == 0)// pokud je scitac sud�
    {
        vysledek = *p_a + *p_b + scitac;

    }
    else vysledek = scitac+*p_b;

    return vysledek;// vracime vysledek INT



}
int main()
{
    int x = 10,y=22;
    NSN(x, y);// Funkce pro Nejmensi spolecn� n�sobek
    NSD(x, y);


    int n = 4, m = 4, i = 0,j=0,scitacku=1,f=0,dvojice=0;
    int* matice,*p_1=NULL;

    matice = (int*)malloc(n*m * sizeof(int));// Funkce malloc po��d� o libovoln� mno�stv� pam�ti v parametru uvedeme, kolik ji pot�ebujeme a p�etypujeme pointer na int podle pot�eby

    for (i = 0;i < n;i++)
    {
        for (j = 0;j < m;j++)
        {
            f = funkceplneni(&x, &y, scitacku);// pri vol�n� funkce pou�ijeme u prom�n�ch referen�n� operator
            printf("%d | ", f);
            scitacku++;
        }
        printf("\n");


    }
    printf("\n");

    int b = 8;int c = 5,tmp=0;// deklarace a inicializace promenych

    for (i = 0;i < n;i++)// utvo��me novou matici 
    {
        for (j = 0;j < m;j++)
        {
            f = funkceplneni(&b, &c, scitacku);// pri vol�n� funkce pou�ijeme u prom�n�ch referen�n� operator
            dvojice++;
            scitacku++;

            if (dvojice % 2 == 0 && j != 0)// na ka�de dve uspo��dan� �isla zavol�me funkci NSN 
            {

                printf("Usporadana dvojice cisel [%d,%d] jeho NSD je - ", f, tmp);
                NSN(f, tmp);


            }
            else tmp = f;
        }
     
    }
 
    return 0;
}

