/*
    Author: Zhao Zhang
    Course: CSCI-135
    Instructor: Tong Yi
    Assignment: Lab 4-f

    Write a program trapezoid.cpp that prints an upside-down trapezoid of given width and height.
    However, if the input height is impossibly large for the given width, then the program should report, Impossible shape!
*/

#include <iostream>

int main(){
    int width, height;

    std::cout << "Enter width: ";
    std::cin >> width;
    std::cout << "Enter height: ";
    std::cin >> height;
    std::cout << std::endl;
    //the width of the shape is reduced by 2 for every height past the first, so
    //if (height-1)*2 the amount it will be reduced excedes width, it wouldn't be able to create the shape
    if ((height-1)*2 > width){
        std::cout << "Impossible shape!" << std::endl;
        exit(1);
    }

    for (int i = 0; i < height; i++){
        for (int j = 0; j < i; j++){
            std::cout << " ";
        }
        for (int j = 0; j < width-2*i; j++){
            std::cout << "*";
        }
        for (int j = 0; j < i; j++){
            std::cout << " ";
        }
        std::cout << std::endl;
    }
    return 0;
}