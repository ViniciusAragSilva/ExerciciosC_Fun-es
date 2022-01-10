/*
EXERCICIO 8 - LISTA DE FUN��ES DE VINICIUS ARAGAO 4323
---------------------------------------------------------
   Calcule o valor do resistor s�rie para um led,
   dados a tens�o da fonte, corrente de trabalho o led.
   Assuma led vermelho.

*/


#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL,"");
    float Vf, If;
    float CalcRes (float Vt, float It);     //declarando a variavel antes

    printf("\n Calculo de Resist�ncia para led. \n Digite as informa��es a seguir\n");
    printf("Tens�o aplicada sobre o led e o resistor, em volts: ");
     scanf("%f", &Vf);
    printf("Corrente de trabalho do led, em mA: ");
     scanf("%f", &If);

     CalcRes(Vf, If);

}

float CalcRes (float Vt, float It) //evitando usar 3 variaveis (resistencia) para economizar variaveis
{
    It = 0.001*It;              //transformando a corrente informada em valor de A para mA
    Vt =Vt/It;                     //Transformando Vt em Resistencia, para economizar variaveis

    printf("\n A resist�ncia necess�ria � de %.3f ohms", Vt);
}
