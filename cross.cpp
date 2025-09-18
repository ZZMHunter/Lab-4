/*
    Author: Zhao Zhang
    Course: CSCI-135
    Instructor: Tong Yi
    Assignment: Lab 4-c

    Write a program cross.cpp that asks the user to input the shape size, and prints a diagonal cross of that dimension.
*/

#include <iostream>

int main(){
    int size;
    std::cout << "Input size: ";
    std::cin >> size;
    for (int i = 0; i < size/2; i++){
        //top half of the cross
        for (int j = 0; j < i; j++){
            std::cout << " ";
        }
        std::cout << "*";
        for (int j = 0; j < size-2-2*i; j++){
            std::cout << " ";
        }
        std::cout << "*";
        for (int j = 0; j < i; j ++){
            std::cout << " ";
        }
        std::cout << std::endl;
    }
    
    for (int i = size/2-1; i >= 0; i--){
        //bottom half of the cross
        for (int j = 0; j < i; j++){
            std::cout << " ";
        }
        std::cout << "*";
        for (int j = 0; j < size-2-2*i; j++){
            std::cout << " ";
        }
        std::cout << "*";
        for (int j = 0; j < i; j ++){
            std::cout << " ";
        }
        std::cout << std::endl;
    }
    return 0;
}