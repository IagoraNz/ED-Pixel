# 📄 RGB, grayscale and clustering image processing
Collaborative repository for advancing and learning the C programming language in Data Structure I.
When processing the algorithm, images will be obtained under three parameters: RGB post-analysis of the pixels in their spectra,
converting this image to gray and clustering this image

## :link: Development environment
1. Regarding GCC
```
gcc.exe (tdm64-1) 10.3.0
Copyright (C) 2020 Free Software Foundation, Inc.
This is free software; see the source for copying conditions.  There is NO
warranty; not even for MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
```
2. Visual Studio Code
```
1.89.1
```

## :link: Results
### Image 1
In image 1, a colored image is obtained from the synthesis of the data provided in the txt file. The process works as follows: each set of 3 numerical values ​​read from the file represents an individual pixel in the image. These three values ​​correspond to the intensities of the primary colors – red, green and blue (RGB) – which, combined, determine the final color of each pixel. Thus, by sequentially reading and processing all the values ​​in the txt file, a complete image is constructed, where each pixel is defined by its respective color components.

### Image 2
In image 2, the conversion of image 1 to the grayscale spectrum is observed. This process involves transforming each colored pixel of the original image into a gray scale, where each pixel is represented by a single luminosity value. The conversion is carried out by calculating the weighted average of the red, green and blue (RGB) intensities of each pixel, resulting in an image that varies from black to white, through various shades of gray.

### Image 3
In image 3, the result of applying the clustering process to image 2 is presented. This process involves segmenting the image into different groups or clusters, where pixels with similar characteristics are grouped together. Clustering is performed based on the gray intensities of each pixel in image 2, highlighting different regions and patterns in the resulting image. The objective of this procedure is to identify and separate distinct areas within the image, facilitating the analysis and interpretation of visual data.
