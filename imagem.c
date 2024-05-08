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
            printPixel(i,j,img);
        }
        printf("\n");
    }

}

//Retornar o pixel, dado as suas posicoes de linha e coluna
Pixel getPixel(int lin, int col, Imagem *img){
   
    return img->pixels[lin * (img->largura) + col];
}