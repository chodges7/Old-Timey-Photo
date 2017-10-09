#include<vector>
#include<string>
#include"bitmap.h"


int main(){

char input;
srand( time(NULL) );

do{

//Ask the user for which file to turn into greyscale inside a menu similar to the gorcery manager menu
std::cout << "\n=== Greyscale Image manager ===\n" << "(A)dd an image to turn Greyscale (.bmp images only)\n";
std::cout << "(I)nstructions on Greyscale manager\n" << "(Q)uit Greyscale manager\n";
std::cin >> input;

Bitmap image;
Pixel rgb;
std::string title;

if (input == 'a' || input =='A'){

//Make a 2-D matrix of the photo

std::cout << "Please type the name of the image you would like to greyscale:\n";
std::cin >> title;
image.open(title);
std::vector <std::vector <Pixel> > bmp;

std::cout << "Would you like a filter on your image?\n";
std::cout << "(F)ilm grain\n" << "(B)order\n" << "(N)o\n";
std::cin >> input;

//Black and white version

if (input == 'n' || input == 'N'){
    if (image.isImage() == 1){
        bmp = image.toPixelMatrix();
        std::cout << title << " has been loaded.\n";
        std::cout << "It is " << bmp[0].size();
        std::cout << " wide and " << bmp.size() << " pixels high\n";

        for (int rodex = 0; rodex < bmp.size(); rodex++){
            int tempRed;
            int tempBlue;
            int tempGreen;
            int avg;
            for (int coldex = 0; coldex < bmp[0].size(); coldex++){
                rgb = bmp[rodex][coldex];
                tempRed = rgb.red;
                tempBlue = rgb.blue;
                tempGreen = rgb.green;
                avg = tempRed + tempBlue + tempGreen;
                avg = avg / 3;
                rgb.red = avg;
                rgb.blue = avg;
                rgb.green = avg;
                bmp[rodex][coldex] = rgb;
            }
        }
    
        image.fromPixelMatrix(bmp);
        image.save("oldtimey.bmp");
        std::cout << "Conversion done\n";
    }
}

//Film grain filter

else if (input == 'f' || input == 'F'){
    if (image.isImage() == 1){
        bmp = image.toPixelMatrix();
        std::cout << title << " has been loaded.\n";
        std::cout << "It is " << bmp[0].size();
        std::cout << " wide and " << bmp.size() << " pixels high\n";

        int randomNum;

        for (int rodex = 0; rodex < bmp.size(); rodex++){
            int tempRed;
            int tempBlue;
            int tempGreen;
            int avg;
            for (int coldex = 0; coldex < bmp[0].size(); coldex++){
                
                randomNum = rand() % 1000;

                if (randomNum == 0){
                    rgb = bmp[rodex][coldex];
                    rgb.red = 0;
                    rgb.blue = 0;
                    rgb.green = 0;
                    bmp[rodex][coldex] = rgb;
                }
                else if (randomNum != 0){
                    rgb = bmp[rodex][coldex];
                    tempRed = rgb.red;
                    tempBlue = rgb.blue;
                    tempGreen = rgb.green;
                    avg = tempRed + tempBlue + tempGreen;
                    avg = avg / 3;
                    rgb.red = avg;
                    rgb.blue = avg;
                    rgb.green = avg;
                    bmp[rodex][coldex] = rgb;
                }
            }
        }
    
        image.fromPixelMatrix(bmp);
        image.save("oldtimegrainy.bmp");
        std::cout << "Conversion done\n";
    }
}

//Border filter

else if (input == 'b' || input == 'B'){
    if (image.isImage() == 1){
        bmp = image.toPixelMatrix();
        std::cout << title << " has been loaded.\n";
        std::cout << "It is " << bmp[0].size();
        std::cout << " wide and " << bmp.size() << " pixels high\n";

        for (int rodex = 0; rodex < bmp.size(); rodex++){
            int tempRed;
            int tempBlue;
            int tempGreen;
            int avg;
            for (int coldex = 0; coldex < bmp[0].size(); coldex++){
                rgb = bmp[rodex][coldex];
                tempRed = rgb.red;
                tempBlue = rgb.blue;
                tempGreen = rgb.green;
                avg = tempRed + tempBlue + tempGreen;
                avg = avg / 3;
                rgb.red = avg;
                rgb.blue = avg;
                rgb.green = avg;
                bmp[rodex][coldex] = rgb;
            }
        }
    
        image.fromPixelMatrix(bmp);
        image.save("oldtimeborder.bmp");
        std::cout << "Conversion done\n";
    }
}

else if (image.isImage() == 0){
    std::cout << "That file isn't a .bmp format. Please enter a different file.\n";
}

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
