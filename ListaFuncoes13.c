/*
EXERCICIO 13 - LISTA DE FUN��ES DE VINICIUS ARAGAO 4323
---------------------------------------------------------
    Recebe um caractere. Retorna com 1 se
    este caracter corresponde a um d�gito num�rico,
    caso contr�rio retorna com zero.

*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
	setlocale (LC_ALL,"");
	 char caracter;
	setlocale (LC_ALL,"");
    printf("\n Verificador de caractere num�rico. \n Digite um caracter, se for n�mero retorna 1: ");
     scanf("%c", &caracter);
    if(caracter >= 48 && caracter <= 57)
    {
        return 1;
    } else
    {
        return 0;
    }
}
