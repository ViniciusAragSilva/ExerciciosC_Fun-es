#include <stdio.h>
#include <stdlib.h>


char CaracNum (int Num)         //pelo que eu entendi, se da um valor de 1 pra a, de 2 pra b e assim por diante
{
    Num = Num - 96;             //como a em ASCII eh 97, decresce 96 e botase o valor ASCII de a, que eh 1 (b eh 98, c eh 99...)
    printf("seu valor numerico eh considerado: %d ", Num);

}

int main()
{
     char Carac;
    printf("coloque uma letra e sera dado o valor numerico 1 a 10:  ");
    scanf("%c", &Carac);

    CaracNum(Carac);


}
