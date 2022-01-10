/*
EXERCICIO 12 - LISTA DE FUNÇÕES DE VINICIUS ARAGAO 4323
---------------------------------------------------------
     Recebe um valor inteiro. Retorna com 1 se este
     valor for par, caso contrário retorna com zero.

*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    int valor;
	setlocale (LC_ALL,"");
    printf("\n Verificador de numero par. \n Digite um número, se for par retorna 1: ");
     scanf("%d", &valor);
    if(valor%2 == 0)
    {
        return 1;
    } else
    {
        return 0;
    }
}
