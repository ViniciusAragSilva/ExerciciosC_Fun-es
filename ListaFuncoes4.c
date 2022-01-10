#include <stdio.h>
#include <stdlib.h>

float FarCelsius (float Far, float Celsius)                     //float para adquirir resultados precisos
{
    Celsius = 1.8*(Far - 32);                                   //expressao que converte F para C
    printf("\n    %.2f fahrenheit sao %.2f celsius \n", Far, Celsius);
}

int main()
{
    float cels, fars;
    printf("coloque o valor em fahrenheit e sera convertido para celsius:  ");
    scanf("%f", &fars);

    FarCelsius(fars, cels);

}
