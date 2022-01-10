/*
EXERCICIO 10 - LISTA DE FUNÇÕES DE VINICIUS ARAGAO 4323
---------------------------------------------------------
    Dados os valores de resistência da carga
     e tensão aplicada, calcula
     a potência dissipada por ela.

*/
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL,"");
    float Vf, Rf;
    float CalcPot (float V1, float R1);     //declarando a variavel antes

    printf("\n Calculo de potência. \n Digite as informações a seguir: \n");
    printf("Tensão aplicada sobre a carga, em volts: ");
     scanf("%f", &Vf);
    printf("Resistência da carga, em ohms: ");
     scanf("%f", &Rf);

     CalcPot(Vf, Rf);

}

float CalcPot(float V1, float R1 )
{
    V1 = (V1*V1)/R1;
    printf("A potência dissipada é %.3f watts", V1);
    if(V1<1)
    {
        V1 = V1*1000;
        printf("\n ou %.2f miliwatts \n\n", V1);
    }
}
