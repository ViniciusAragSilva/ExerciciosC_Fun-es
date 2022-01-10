/*
EXERCICIO 11 - LISTA DE FUN��ES DE VINICIUS ARAGAO 4323
---------------------------------------------------------
     Dados os valores de Vin e Vout do divisor de tens�o
representado abaixo, calcule a rela��o R2/R1
necess�ria para constru��o deste divisor.
(imagem anexa ao pdf da lista de fun��es)

*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
	setlocale (LC_ALL,"");
    float Vin, Vout, Vrel, rel;
    float CalcRel (float Vi, float Vo, float Vr, float Relationator);     //declarando a variavel antes

    printf("\n Calculo da Rela��o R2/R1. \n Digite as informa��es a seguir: \n");
    printf("Tens�o de entrada, em volts: ");
     scanf("%f", &Vin);
    printf("Tens�o de sa�da, em volts: ");
     scanf("%f", &Vout);

     CalcRel(Vin, Vout, Vrel, rel);

}

float CalcRel(float Vi, float Vo, float Vr, float Relationator)
{
    Vr = Vo/Vi;
    Relationator = (1 - Vr)/Vr;

    printf("A Rela��o de R2/R1 � que, para cada %.3f R1, h� 1 R2", Relationator);

}
