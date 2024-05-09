#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <string.h>
#include "imagem.h"

struct pixel{
    int red, blue, green;
};

struct imagem{
    int altura, largura;
    PixelRGB *pixels;
};

struct pixelgray{
    int gray;
};

struct image{
    int altura;
    int largura;
    Pixelgray *pixels;
};

void printImagem(Imagem *img){

    for(int i=0;i<img->altura;i++){
        for(int j=0;j<img->largura;j++){
            printPixel(i,j,img);
        }
        printf("\n");
    }
}

PixelRGB getPixel(int lin, int col, Imagem *img){
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

void alocarPixels(int altura, int largura, PixelRGB **pixel){
    *pixel = (PixelRGB*)calloc(sizeof(PixelRGB), altura*largura);
}

void converteImagem(Imagem *image,FILE *arq){
    int i=0;

    fscanf(arq,"%d", image->altura);
    fscanf(arq,"%d", image->largura);
    
    alocarPixels(image->altura,image->largura, image->pixels);

    while(!(feof(arq))){
        fscanf(arq,"%d %d %d,", image->pixels[i].red, image->pixels[i].green,image->pixels[i].blue);
        printf("%d %d %d,", image->pixels[i].red, image->pixels[i].green,image->pixels[i].blue);
        i++;
    }
}  
