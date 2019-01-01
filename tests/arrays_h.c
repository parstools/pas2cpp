//translation arrays.lpr by human
#include <string.h>
#include <stdio.h>

int tabA[4][5];
int tabB[4][5];
char tabC[6];
char tabC1[16];
int tabD[6][3];

char *p;
int *pint;

typedef int* PInteger;

int main()
{
	tabA[2][2] = 5;
	tabA[2][2] = 5;
	tabB[2][2] = 5;
	tabB[2][2] = 5;
	tabC[1] = 'a';
	tabC1[11] = 'a';
	memcpy(tabB, tabA, sizeof(tabB));
	for (int i=0; i<sizeof(tabC)/sizeof(tabC[0]); i++)
		tabC[i] = i + 'a' + 5;
	p = tabC;
	printf("%c\n", p[0]);//f
	p = tabC + 2;
	printf("%c\n", p[0]);//h
	for (int i = 0; i<sizeof(tabD) / sizeof(tabD[0]); i++)
		for (int j = 0; j<sizeof(tabD[i]) / sizeof(tabD[i][0]); j++)
			tabD[i][j] = 1000 * (i-2) + (j+2);
	p = tabD;
	pint = (PInteger)p;
	printf("%d\n", *pint);//-1998
	p = tabD[3];
	pint = (PInteger)p;
	printf("%d\n", *pint);//1002
	p = tabD[3]+1;
	pint = (PInteger)p;
	printf("%d\n", *pint);//1003
    return 0;
}
