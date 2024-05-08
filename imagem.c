#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include "imagem.h"

typedef struct{
    int red, blue, green;
}Pixel;

typedef struct{
    int altura, largura;
    Pixel *pixels;
}Imagem;

void printImagem(Imagem *img){

    for(int i=0;i<img->altura;i++){
        for(int j=0;j<img->largura;j++){
            printf("%d,%d,%d", img->pixels[i * (img->largura) + j].red, img->pixels[i * (img->largura) + j].green,img->pixels[i * (img->largura) + j].blue);
        }
        printf("\n");
    }

}