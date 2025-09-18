/*
    Author: Zhao Zhang
    Course: CSCI-135
    Instructor: Tong Yi
    Assignment: Lab 4-b

    Write a program checkerboard.cpp that asks the user to input width and height and prints a 
    rectangular checkerboard of the requested size using asterisks and spaces (alternating).
*/

#include <iostream>

int main(){
    int height, width;
    //takes user inputs for height and width
    std::cout << "Input width: ";
    std::cin >> width;
    std::cout << "Input height: ";
    std::cin >> height;
    for (int i = 0; i < height; i++){
        for (int j = 0; j < width; j++){
            //2 conditions so that on spaces and * will appear on either odd or even i/j values
            if (i%2 == 0){
                if (j%2 == 0){
                    std::cout << "*";
                }else{
                    std::cout << " ";
                }
            }else{
                if (j%2 == 0){
                    std::cout << " ";
                }else{
                    std::cout << "*";
                }
            }
        }
        std::cout << std::endl;
    }
    return 0;
}