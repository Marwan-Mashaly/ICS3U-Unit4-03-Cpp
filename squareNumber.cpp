// Copyright (c) 2019 St. Mother Teresa HS All rights reserved
//
// Created by: Marwan Mashaly
// Created on: October 2019
// This program lets user to know the square of numbers until input

#include <iostream>
#include <string>



int main() {
    // This Function lets user to know the square of numbers until input
    std::string num;
    int total;
    int numCheck;
    int squareNumber;
    int numberInt;
    int numberFloat;
    // Input
    std::cout << "Enter how many times to repeat: ";
    std::cin >> num;
    std::cout << "" << std::endl;

   // process & output
   try {
        numberFloat = std::strtof(num);
         numberInt = int(numberFloat);
        if (numberInt == numberFloat) {
           std::cout << "it's an Integer" << std::endl;
            }else {
            std::cout << "Invalid it's a decimal" << std::endl;
            exit(1);
        }

      for(squareNumber = 1; squareNumber <= numberFloat; squareNumber++) {
         total = squareNumber*squareNumber;
         std::cout << "the square number for " << squareNumber << (" = ") <<
                    total<< std::endl;
        }
   }catch (std::invalid_argument) {
        std::cout << "Invalid number";

    }
}
