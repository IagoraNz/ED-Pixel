#include <stdio.h>
#include "imagem.h"

int main(){
    FILE *arq;
    arq = fopen("../input_image.txt", "r");
    
    Image *image;
    
    converteImagem(&image, arq);

    return 0;
}
