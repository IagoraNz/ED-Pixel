#include <stdio.h>
#include "imagem.h"

typedef struct pixel {
    int red, blue, green;
} Pixel;

typedef struct imagem
{
    int altura, largura;
    Pixel *pixels;
} Imagem;

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

int main(){

    return 0;
}