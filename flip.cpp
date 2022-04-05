#include <iostream>
#include <fstream>
#include <cstring>
#include <cmath>
#include "bmplib.cpp"

using namespace std;
unsigned char image[SIZE][SIZE];
int temp ;
void loadImage ();
void saveImage ();
void doflipForImage ();
void doflipForImage2 ();
int main()
{
    int n ;
    cout << "1 for down flip" << endl << "2 for side flip" ;
    cin >> n ;
  loadImage();
  if (n==1)
  doflipForImage();
  else
  doflipForImage2();
  saveImage();
  return 0;
}

//_________________________________________
void loadImage () {
   char imageFileName[100];

   // Get gray scale image file name
   cout << "Enter the source image file name: ";
   cin >> imageFileName;

   // Add to it .bmp extension and load image
   strcat (imageFileName, ".bmp");
   readGSBMP(imageFileName, image);
}

//_________________________________________
void saveImage () {
   char imageFileName[100];

   // Get gray scale image target file name
   cout << "Enter the target image file name: ";
   cin >> imageFileName;

   // Add to it .bmp extension and load image
   strcat (imageFileName, ".bmp");
   writeGSBMP(imageFileName, image);
}
void doflipForImage() {
  for (int i = 0; i < SIZE; i++) {
    for (int j = 0; j< SIZE; j++) {
image[i][j] = image[i-260][j-35];
    }
  }
}
void doflipForImage2() {
    for (int i = 0; i < SIZE; i++) {
    for (int j = 0; j< SIZE; j++) {
image [i][j] = image[i][(SIZE*2)-j] ;
    }
  }
}
