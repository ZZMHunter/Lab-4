/*
    Author: Zhao Zhang
    Course: CSCI-135
    Instructor: Tong Yi
    Assignment: Lab 4-e

    Write a program upper.cpp that prints the top-right half of a square, given the side length.
*/

#include <iostream>

int main(){
    int length;
    std::cout << "Input side length: ";
    std::cin >> length;
    //any time where width is greater than height is when * will appear
    for (int i = 0; i < length; i++){
        for (int j = 0; j < length; j++){
            if (j>=i){
                std::cout << "*";
            }else{
                std::cout << " ";
            }
        }
        std::cout << std::endl;
    }
    return 0;
}