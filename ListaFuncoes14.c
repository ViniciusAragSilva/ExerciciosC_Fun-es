/*
EXERCICIO 14 - LISTA DE FUNÇÕES DE VINICIUS ARAGAO 4323
---------------------------------------------------------
   Recebe um caractere. Retorna com 1 se este caracter
   corresponde a uma letra maiúscula, caso contrário
   retorna com zero.

*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
	setlocale (LC_ALL,"");
	char caracter;
	setlocale (LC_ALL,"");
    printf("\n Verificador de caractere maiúsculo. \n Digite um caracter, se for maiúsculo retorna 1: ");
     scanf("%c", &caracter);
    if(caracter >= 65 && caracter <= 90)
    {
        return 1;
    } else
    {
        return 0;
    }
}

