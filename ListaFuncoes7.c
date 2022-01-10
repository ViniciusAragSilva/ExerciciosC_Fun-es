/*
EXERCICIO 7 - LISTA DE FUN��ES DE VINICIUS ARAGAO 4323
---------------------------------------------------------
  A partir da diferen�a de tempo entre o pico positivo de dois sinais
  e a freq�ncia destes, calcule a diferen�a de fase entre eles, em graus.

   Parametros : float frequencia float tempo (n�o precisa ser estes os nomes das vari�veis)
   Retorno : float
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>



int main()
{
    setlocale(LC_ALL,"");
    float time, freq1, freq2;
    float Diffase(float tempo, float Hz1);


    printf("\n CALCULO DA DEFASAGEM DE SINAIS \n\n");
    printf("\n Informe as tres caracteristicas a seguir:");
    printf("\n A diferenca do tempo entre o pico de cada um, em ms: ");
    scanf("%f", &time);
    printf("\n A primeira frequencia, em hertz: ");
    scanf("%f", &freq1);
    printf("\n A segunda frequencia, em hertz: ");
    scanf("%f", &freq2);

    Diffase(time, freq1);                       // frequencia 2 nao eh necessaria, visto q s� eh necessario a diferen�a de pico e a frequencia 1
}

float Diffase( float tempo, float Hz1)
{
    Hz1 = 1 / Hz1;
    tempo = tempo*0.001;


    Hz1 = (360*tempo) / Hz1;// Para economia de variaveis, Hz1 assume o valor da defasagem
    if(Hz1 > 360)
    {
        Hz1 = Hz1/360;
    }
    printf("A defasagem eh %.3f graus", Hz1);

}


