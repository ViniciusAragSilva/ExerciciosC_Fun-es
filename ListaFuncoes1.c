#include <stdio.h>
#include <stdlib.h>


//------------------------------ Funcao - minuscula - maiuscula -------------------------------------------------

char PMinusculo(char letra)             // o char PMinusculo recebe char e devolve char
{
    letra = letra - 32;                 // o -32 decresce 32 simbolos na tabela ASCII
    printf("a letra maiuscula eh %c", letra);
}

int main()
{
    char letter;
    printf("coloque uma letra minuscula e recebera a maiuscula dela:  ");
    scanf("%c", &letter);

    PMinusculo(letter);                 //para invocar a funcao feita anteriormente para dentro da main
}
