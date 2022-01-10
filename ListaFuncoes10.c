/*
EXERCICIO 10 - LISTA DE FUN��ES DE VINICIUS ARAGAO 4323
---------------------------------------------------------
    Dados os valores de resist�ncia da carga
     e tens�o aplicada, calcula
     a pot�ncia dissipada por ela.

*/
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL,"");
    float Vf, Rf;
    float CalcPot (float V1, float R1);     //declarando a variavel antes

    printf("\n Calculo de pot�ncia. \n Digite as informa��es a seguir: \n");
    printf("Tens�o aplicada sobre a carga, em volts: ");
     scanf("%f", &Vf);
    printf("Resist�ncia da carga, em ohms: ");
     scanf("%f", &Rf);

     CalcPot(Vf, Rf);

}

float CalcPot(float V1, float R1 )
{
    V1 = (V1*V1)/R1;
    printf("A pot�ncia dissipada � %.3f watts", V1);
    if(V1<1)
    {
        V1 = V1*1000;
        printf("\n ou %.2f miliwatts \n\n", V1);
    }
}
