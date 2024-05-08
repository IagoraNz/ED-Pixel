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

void printDimesoesImagens(Imagem *img){
    printf("Altura: %d\nLargura: %d\n", img->altura, img->largura);
}

void printPixel(int lin, int col, Imagem *img){
    printf("%d, %d, %d", img->pixels[lin*img->largura+col].red, img->pixels[lin*img->largura+col].green, img->pixels[lin*img->largura+col].blue);
}