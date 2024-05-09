#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <string.h>
#include "imagem.h"

void printImagem(Imagem *img){

    for(int i=0;i < img->altura; i++){
        for(int j=0;j < img->largura; j++){
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
    printf("\033[38;2;%d;%d;%dm**\033[0m", img->pixels[lin*img->largura+col].red, img->pixels[lin*img->largura+col].green, img->pixels[lin*img->largura+col].blue);
}

void alocarPixelsGray(int altura, int largura, PixelGray **pixel){
    *pixel = (PixelGray*)calloc(sizeof(PixelGray), altura*largura);
}

//- Converter imagem RGB para nivel de cinza, isto é, com um único valor de pixel ->
// - ImageGray = (Pixelrgb.red +pixelrgb.blue+.pixelrgb gree)/3
void tranformaRGB_GRAY(Imagem *img, ImageGray *imagemgray){
    imagemgray->altura = img->altura;
    imagemgray->largura = img->largura;
    
    alocarPixelsGray(imagemgray->altura, imagemgray->largura,&(imagemgray->pixels));
    
    for ( int i = 0; i < img->altura; i++){
        for (int j = 0; j < img->largura; j++) {

            int gray = (img->pixels[i * img->largura +j].red + img->pixels[i * img->largura +j].green + img->pixels[i * img->largura +j].blue) / 3;

            imagemgray->pixels[i * img->largura +j].gray = gray;
        }
     }
}

void ImagemGray(ImageGray *img,FILE *imagem){
    if (imagem == NULL){
        printf("Nao foi possivel criar o arquivo!\n");
    }

    fprintf(imagem, "%d\n", img->altura);
    fprintf(imagem, "%d\n", img->largura);

    for(int i=0;i<img->altura;i++){
        for(int x = 0; x < img->largura; x++){
            fprintf(imagem,"%d %d %d,", img->pixels[(i * img->largura) + x].gray, img->pixels[(i * img->largura) + x].gray, img->pixels[(i * img->largura) + x].gray);
        }
        fprintf(imagem,"\n");
    }
    
    
    fclose(imagem);
}

void alocarPixels(int altura, int largura, PixelRGB **pixel){
    *pixel = (PixelRGB*)calloc(sizeof(PixelRGB), altura*largura);
}

void converteImagem(Imagem *image,FILE *arq){
    int i=0;

    fscanf(arq,"%d", &(image->altura));
    fscanf(arq,"%d", &(image->largura));
    
    alocarPixels(image->altura,image->largura, &(image->pixels));

    while(!(feof(arq))){
        fscanf(arq,"%d %d %d,", &(image->pixels[i].red), &(image->pixels[i].green),&(image->pixels[i].blue));
        i++;
    }
}  

int main(){
    FILE *arq;
    arq = fopen("../input_image.txt","r");
    


    Imagem image;
    ImageGray imagegray;

    system("PAUSE");

    converteImagem(&image,arq);
    printImagem(&image);

    tranformaRGB_GRAY(&image, &imagegray);

    FILE *imagem;
    imagem = fopen("./imagemgray.txt", "r");
    ImagemGray(&imagegray,imagem);

    imagem = fopen("./imagemgray.txt", "r");
    converteImagem(&image,imagem);

    printImagem(&image);

    free(image.pixels);
    free(imagegray.pixels);

    return 0;
}