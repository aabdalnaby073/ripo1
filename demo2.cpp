#include <iostream>
#include <fstream>
#include <cstring>
#include <cmath>
#include "bmplib.cpp"

using namespace std;
unsigned char image[SIZE][SIZE];

void loadImage ();
void saveImage ();
void doSomethingForImage ();
void doSomethingForImage2();
void doSomethingForImage3();
void doSomethingForImage4();
int main()
{
  loadImage();
  int n ;
  cout << "1-Left 1/2 " << endl <<  "2-Right 1/2 " <<endl << "3-Upper 1/2 "<< endl <<  "4-Lower 1/2" << endl << "choose ya hapipyyy " << endl  ;
  cin >> n ;
if (n == 1)
doSomethingForImage ();
else if (n==2)
doSomethingForImage2();
else if (n==3)
doSomethingForImage3();
else
doSomethingForImage4();
  saveImage();
  return 0;
}

//_________________________________________
void loadImage () {
   char imageFileName[100];

   cout << "Enter the source image file name: ";
   cin >> imageFileName;

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

//_________________________________________
void doSomethingForImage() {
  for (int i = 0; i < SIZE; i++) {
    for (int j = 0; j< SIZE; j++) {
image [i][j] = image[255-i][j] ;

    }
  }
}
void doSomethingForImage2() {
  for (int i = 0; i < SIZE; i++) {
    for (int j = 0; j< SIZE; j++) {
image [i][j] = image[i][255-j] ;

    }
  }
}
void doSomethingForImage3() {
  for (int i = SIZE ; i >=0; i--) {
    for (int j = SIZE ; j>= 0; j--) {
image [i][j] = image[255-i][j] ;

    }
  }
}
void doSomethingForImage4() {
  for (int i = SIZE ; i >=0; i--) {
    for (int j = SIZE ; j>= 0; j--) {
image [i][j] = image[i][255-j] ;

    }
  }
}
