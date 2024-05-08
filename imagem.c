#include <stdio.h>
#include "imagem.h"

typedef struct{
    int red, blue, green;
}Pixel;

typedef struct imagem
{
    int altura, largura;
    Pixel *pixels;
} Imagem;

int main(){

    return 0;
}