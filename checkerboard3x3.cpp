/*
    Author: Zhao Zhang
    Course: CSCI-135
    Instructor: Tong Yi
    Assignment: Lab 4-g

    Write a program checkerboard3x3.cpp that asks the user to input width and height 
    and prints a checkerboard of 3-by-3 squares. 
    (It should work even if the input dimensions are not a multiple of three.)
*/

#include <iostream>

int main(){
    int width, height;

    std::cout << "Enter width: ";
    std::cin >> width;
    std::cout << "Enter height: ";
    std::cin >> height;

    for (int i = 0; i < height; i++){
        for (int j = 0; j < width; j ++){
            //change logic based on height, every 3 rows logic alternates
            if (i/3%2 == 0){
                if (j/3%2 == 0){
                    std::cout << "*";
                }else{
                    std::cout << " ";
                }
            }else{
                if (j/3%2 == 1){
                    std::cout << "*";
                }else{
                    std::cout << " ";
                }
            }
        }
        std::cout << std::endl;
    }
    return 0;
}