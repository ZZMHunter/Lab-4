/*
    Author: Zhao Zhang
    Course: CSCI-135
    Instructor: Tong Yi
    Assignment: Lab 4-d

    Write a program lower.cpp that prints the bottom-left half of a square, given the side length.
*/

#include <iostream>

int main(){
    int length;
    std::cout << "Input side length: ";
    std::cin >> length;
    //any time that width is less height is when * will appear
    for (int i = 0; i < length; i++){
        for (int j = 0; j < length; j++){
            if (i>=j){
                std::cout << "*";
            }else{
                std::cout << " ";
            }
        }
        std::cout << std::endl;
    }
    return 0;
}