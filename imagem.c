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


//Retornar o pixel, dado as suas posicoes de linha e coluna
Pixel getPixel(int lin, int col, Imagem *img){
   
    return img->pixels[lin * (img->largura) + col];
}




