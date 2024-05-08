typedef struct pixel PixelRGB;

typedef struct imagem Imagem;

//Mostrar as dimensoes da imagem
void printDimensoesImagens(Imagem *img);

//Mostrar os valores de um pixel especifico, dado as suas posicoes de linha e coluna
void printPixel(int lin, int col, Imagem *img);

//Retornar o pixel, dado as suas posicoes de linha e coluna
PixelRGB getPixel(int lin, int col, Imagem *img);

//Trocar o valor de um pixel, dado as suas posicoes de linha e coluna
void setPixel(int lin, int col, Imagem *img);

//Mostrar os pixels da imagem, em forma de matriz
void printImagem(Imagem *img);