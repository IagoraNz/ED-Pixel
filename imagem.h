#ifdef IMAGEM_H
#define IMAGEM_H

// typedef struct pixel PixelRGB;
// typedef struct imagem Imagem;

// typedef struct pixelgray Pixelgray;
// typedef struct image ImageGray;

typedef struct pixel{
    int red, blue, green;
}Pixel;

typedef struct imagem{
    int altura, largura;
    PixelRGB *pixels;
}Image;

typedef struct pixelgray{
    int gray;
}Pixelgray;

typedef struct image{
    int altura;
    int largura;
    Pixelgray *pixels;
}Imagegray;

/*
Novas funcoes
- ler txt e converter em imagem -> Image
- Converter imagem RGB para nivel de cinza, isto é, com um único valor de pixel -> ImageGray
- exportar imagem para txt -> txt salvo
- aplicar clusterizacao na imagem a partir de um arquivo txt com sementes, 
	adtaptar a funcao da distancia euclidiana para considerar apenas os valores do pixel -> salvar txt com o resultado da clusterizacao
*/

void converteImagem(Imagem *image,FILE *arq);

void printDimesoesImagens(Imagem *img); // Francinaldo
void printPixel(int lin, int col, Imagem *img); // Francinaldo

PixelRGB getPixel(int lin, int col, Imagem *img);

//Trocar o valor de um pixel, dado as suas posicoes de linha e coluna
void setPixel(int lin, int col, Imagem *img);

//Mostrar os pixels da imagem, em forma de matriz
void printImagem(Imagem *img);

void ImagemGray(ImageGray imagem);

void alocarPixels(int altura, int largura, PixelRGB **pixel);
#endif