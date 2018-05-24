#include <iostream>
#include <fstream>
#include <math.h>

#include "Image.h"
#include "Sobel.h"

int main(int argc, char *argv[])
{

	Image* image = new Image;
	Sobel::applySobelFilter(image);
	image->saveImage();

	return 0;
}
