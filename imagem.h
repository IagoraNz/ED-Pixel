typedef struct pixel PixelRGB;

typedef struct imagem Imagem;

void printDimesoesImagens(Imagem *img);
void printPixel(int lin, int col, Imagem *img);
PixelRGB getPixel(int lin, int col, Imagem *img);
PixelRGB setPixel(int lin, int col, Imagem *img);
void printImagem(Imagem *img);