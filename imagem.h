typedef struct pixel PixelRGB;
typedef struct imagem Imagem;

typedef struct pixelgray Pixelgray;
typedef struct image ImageGray;

void printDimesoesImagens(Imagem *img); // Francinaldo
void printPixel(int lin, int col, Imagem *img); // Francinaldo

PixelRGB getPixel(int lin, int col, Imagem *img);

//Trocar o valor de um pixel, dado as suas posicoes de linha e coluna
void setPixel(int lin, int col, Imagem *img);

//Mostrar os pixels da imagem, em forma de matriz
void printImagem(Imagem *img);