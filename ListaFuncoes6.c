#include <stdio.h>
#include <stdlib.h>

float FreqPPeriodo(float T, float f)
{
    T = 1/f;
     printf("   \n o periodo desse sinal de %.3f Hz eh %f segundos", f, T);
}


int main()
{
    float frequencia, periodo;
    printf("coloque a frequencia do sinal e sera calculado seu periodo:  ");
    scanf("%f", &frequencia);

    FreqPPeriodo(periodo, frequencia);
}
