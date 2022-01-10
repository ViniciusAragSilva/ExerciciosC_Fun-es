#include <stdio.h>
#include <stdlib.h>

char PMaiusculo(char letra)
{
    letra = letra+32;
    if(letra < 97 || letra > 122)               //condicao que impede de ser outro valor alem de um caractere maiusuculo
    { printf("a letra tem que ser maiuscula"); }
        else { printf("a letra minuscula eh %c", letra); }
}

int main()
{
    char letter;
    printf("coloque uma letra maiuscula e recebera a minuscula dela:  ");
    scanf("%c", &letter);

    PMaiusculo(letter);                 //para invocar a funcao feita anteriormente para dentro da main
}
