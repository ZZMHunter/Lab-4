/*
    Author: Zhao Zhang
    Course: CSCI-135
    Instructor: Tong Yi
    Assignment: Lab 4-a

    Write a program box.cpp that asks the user to input width and height
    and prints a solid rectangular box of the requested size using asterisks.
*/

#include <iostream>

int main(){
    int height, width;
    std::cout << "Input width: ";
    std::cin >> width;
    std::cout << "Input height: ";
    std::cin >> height;
    std::cout << std::endl;
    //nested for loop to give the shape 2 dimensionns
    for (int i = 0; i < height; i++){
        for (int j = 0; j < width; j++){
            std::cout << "* ";
        }
        std::cout << std::endl;
    }
    return 0;
}