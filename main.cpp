#include <iostream>
#include <fstream>
#include <string>
#include "color.hpp"

int main() {

    const int image_width = 256;
    const int image_height = 256;

    //std::string filename="output-image.ppm";

    //std::fstream fs (filename, std::fstream::out);
    //if (!fs) 
      //std::cout << "Error loading file\n";
    //fs << "P3\n" << image_width << " " << image_height << "\n" << "255\n" ;
    std::cout << "P3\n" << image_width << ' ' << image_height << "\n255\n";
    for (int j = image_height-1; j >= 0; --j) {
        for (int i = 0; i < image_width; ++i) {
            color pixel_color(double(i)/(image_width-1), double(j)/(image_height-1), 0.25);
            write_color(std::cout, pixel_color);
        }
    }
}