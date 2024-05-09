#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include "imagem.h"

typedef struct{
    int red, blue, green;
}Pixel;

typedef struct imagem
{
    int altura, largura;
    Pixel *pixels;
}Imagem;


typedef struct pixelgray{
    int gray;
}Pixelgray;

typedef struct image {
    int altura;
    int largura;
    Pixelgray *pixels;
} ImageGray;

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

Pixel getPixel(int lin, int col, Imagem *img){
    return img->pixels[lin * (img->largura) + col];
}

void setPixel(int lin, int col, Imagem *img){
    int i, j, controle = 0;
    printf("Digite a linha e coluna para set: ");
    scanf("%d %d", &lin, &col);

    for(i = 0; i < img->altura; i++){
        for(j = 0; j < img->largura; j++){
            if(lin == i && col == j){
                controle = 1;
                printf("Novos valores do pixel[%d][%d]: ", i, j);
                printf("Blue: ");
                scanf("%d", &img->pixels[i * img->largura + j].blue);
                printf("Green: ");
                scanf("%d", &img->pixels[i * img->largura + j].green);
                printf("Red: ");
                scanf("%d", &img->pixels[i * img->largura + j].red);
            }
        }
    }

    if(!controle)
        printf("Pixel nao encontrado");
}


void printDimesoesImagens(Imagem *img){
    printf("Altura: %d\nLargura: %d\n", img->altura, img->largura);
}

void printPixel(int lin, int col, Imagem *img){
    printf("%d, %d, %d", img->pixels[lin*img->largura+col].red, img->pixels[lin*img->largura+col].green, img->pixels[lin*img->largura+col].blue);
}
