/*
EXERCICIO 9 - LISTA DE FUNÇÕES DE VINICIUS ARAGAO 4323
---------------------------------------------------------
   Dados os valores de tensão e corrente
   em uma carga resistiva, calcule a potência
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

    printf("\n Calculo de potência. \n Digite as informações a seguir: \n");
    printf("Tensão aplicada sobre a carga, em volts: ");
     scanf("%f", &Vf);
    printf("Corrente da carga, em mA: ");
     scanf("%f", &If);

     CalcPot(Vf, If);

}

float CalcPot(float V1, float I1 )
{
    I1 = I1*0.001;
    V1 = V1*I1;
    printf("A potência dissipada é %.3f watts", V1);
    if(V1<1)
    {
        V1 = V1*1000;
        printf("\n ou %.2f miliwatts \n\n", V1);
    }
}
