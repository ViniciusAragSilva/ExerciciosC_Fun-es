#include <stdio.h>
#include <stdlib.h>

float PeriodoPFreq(float T, float f)
{
    f = 1/T;
     printf("   \n A frequencia desse sinal de %f segundos eh %.3f Hz", T, f);
}


int main()
{
    float frequencia, periodo;
    printf("coloque o periodo do sinal e sera calculada a frequencia:  ");
    scanf("%f", &periodo);

    PeriodoPFreq(periodo, frequencia);
}
