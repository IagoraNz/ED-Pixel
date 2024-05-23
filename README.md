# 📄 Processamento de imagem RGB, na escala de cinza e clusterização
Repositório colaborativo para avanço e aprendizado da linguagem programação C em Estrutura de Dados I.
Ao processamento do algoritmo serão obtidos imagens sob três parâmetro: RGB pós-análise dos pixels em seus espectros,
conversão dessa imagem para cinza e clusterização dessa imagem

## :link: Ambiente de desenvolvimento
1. E o Visual Studio Code
```
1.89.1
```

## :link: Resultados
### Imagem 1
Na imagem 1, obtém-se uma imagem colorida a partir da síntese dos dados fornecidos no arquivo txt. O processo funciona da seguinte maneira: cada conjunto de 3 valores numéricos lidos do arquivo representa um pixel individual na imagem. Esses três valores correspondem às intensidades das cores primárias – vermelho, verde e azul (RGB) – que, combinadas, determinam a cor final de cada pixel. Assim, ao ler e processar sequencialmente todos os valores do arquivo txt, constrói-se uma imagem completa, onde cada pixel é definido por suas respectivas componentes de cor.

### Imagem 2
Na imagem 2, observa-se a conversão da imagem 1 para o espectro em tons de cinza. Este processo envolve a transformação de cada pixel colorido da imagem original em uma escala de cinza, onde cada pixel é representado por um único valor de luminosidade. A conversão é realizada calculando-se a média ponderada das intensidades de vermelho, verde e azul (RGB) de cada pixel, resultando em uma imagem que varia do preto ao branco, passando por várias tonalidades de cinza.

### Imagem 3
Na imagem 3, apresenta-se o resultado da aplicação do processo de clusterização na imagem 2. Esse processo envolve a segmentação da imagem em diferentes grupos ou clusters, onde pixels com características semelhantes são agrupados. A clusterização é realizada com base nas intensidades de cinza de cada pixel na imagem 2, destacando diferentes regiões e padrões na imagem resultante. O objetivo desse procedimento é identificar e separar áreas distintas dentro da imagem, facilitando a análise e interpretação dos dados visuais.
