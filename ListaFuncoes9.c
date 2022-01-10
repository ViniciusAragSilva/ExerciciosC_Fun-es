/*
EXERCICIO 9 - LISTA DE FUN��ES DE VINICIUS ARAGAO 4323
---------------------------------------------------------
   Dados os valores de tens�o e corrente
   em uma carga resistiva, calcule a pot�ncia
   dissipada por ela.

*/
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL,"");
    float Vf, If;
    float CalcPot (float V1, float I1);     //declarando a variavel antes

    printf("\n Calculo de pot�ncia. \n Digite as informa��es a seguir: \n");
    printf("Tens�o aplicada sobre a carga, em volts: ");
     scanf("%f", &Vf);
    printf("Corrente da carga, em mA: ");
     scanf("%f", &If);

     CalcPot(Vf, If);

}

float CalcPot(float V1, float I1 )
{
    I1 = I1*0.001;
    V1 = V1*I1;
    printf("A pot�ncia dissipada � %.3f watts", V1);
    if(V1<1)
    {
        V1 = V1*1000;
        printf("\n ou %.2f miliwatts \n\n", V1);
    }
}
