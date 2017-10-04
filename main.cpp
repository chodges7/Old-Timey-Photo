#include<vector>
#include<string>
#include"bitmap.h"


int main(){

char input;

do{

//Ask the user for which file to turn into greyscale inside a menu similar to the gorcery manager menu
std::cout << "=== Greyscale Image manager ===\n" << "(A)dd an image to turn Greyscale\n";
std::cout << "(I)nstructions on Greyscale manager\n" << "(Q)uit Greyscale manager\n";
std::cin >> input;

if (input == 'a' || input =='A'){

//Make a 2-D matrix of the photo

/*
Analyze every pixel in the bitmap using a 'for' loop that looks at the color of the pixels
  then it will take the add all of the pixel values(red,green,blue) and divide by 3 in
  order to take the average and set them all equal to that.
*/

//Save the new greyscale image as oldtimey"imagename".bmp

}

if (input == 'i' || input == 'I'){

//Describe to the user how the Greyscale manager works and send them back to the manager
    std::cout << "Greyscale manager works by taking the individual values in each pixel on a .bmp image and averaging them together.\n";
    std::cout << "Though, you may ask yourself: What values? What's a pixel? and why does it have to be .bmp and not .jpeg?\n" << std::endl;
    std::cout << "A pixel is what makes up your screen, usually there are hundreds to thousands in modern screens. \n";
    std::cout << "In those pixels there are three lights one green, one red, and one blue all with different intensities to make\n";
    std::cout << "all kinds of colors. Lastly, it has to be a .bmp image because that is all this program can understand.\n" << std::endl;
    std::cout << "Hopefully you understood this small explanation. Further research can be done through the power of the internet!\n" << std::endl;
}



if (input == 'q' || input == 'Q'){
std::cout << "Have a nice day!\n";
}

}
while (input != 'q' && input != 'Q');
return 0;
}
