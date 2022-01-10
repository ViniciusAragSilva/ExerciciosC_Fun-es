/*
EXERCICIO 11 - LISTA DE FUNÇÕES DE VINICIUS ARAGAO 4323
---------------------------------------------------------
     Dados os valores de Vin e Vout do divisor de tensão
representado abaixo, calcule a relação R2/R1
necessária para construção deste divisor.
(imagem anexa ao pdf da lista de funções)

*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
	setlocale (LC_ALL,"");
    float Vin, Vout, Vrel, rel;
    float CalcRel (float Vi, float Vo, float Vr, float Relationator);     //declarando a variavel antes

    printf("\n Calculo da Relação R2/R1. \n Digite as informações a seguir: \n");
    printf("Tensão de entrada, em volts: ");
     scanf("%f", &Vin);
    printf("Tensão de saída, em volts: ");
     scanf("%f", &Vout);

     CalcRel(Vin, Vout, Vrel, rel);

}

float CalcRel(float Vi, float Vo, float Vr, float Relationator)
{
    Vr = Vo/Vi;
    Relationator = (1 - Vr)/Vr;

    printf("A Relação de R2/R1 é que, para cada %.3f R1, há 1 R2", Relationator);

}
