// Copyright (c) 2020 Jonathan Pasco-Arnone all rights reserved
//
// Created by Jonathan Pasco-Arnone
// Created on December 2020
// This program determines whether it is a leap year or not

#include <iostream>

int main() {
    // This function determines whether it is a leap year or not

    std::string yearStr;
    int year;

    std::cout << "" << std::endl;
    std::cout << "This program determines whether it"
          " is a leap year or not." << std::endl;
    std::cout << "" << std::endl;
    std::cout << "Please input the year: ";
    std::cin >> yearStr;
    std::cout << "" << std::endl;

    try {
        year = std::stoi(yearStr);
        if (year % 4 == 0) {
            if (year % 100 == 0) {
                if (year % 400 == 0) {
                    std::cout << "It is a leap year" << std::endl;

                } else {
                    std::cout << "It is a common year" << std::endl;
                }

            } else {
                std::cout << "It is a leap year" << std::endl;
            }

        } else {
            std::cout << "It is a common year" << std::endl;
        }
    } catch (std::invalid_argument) {
        std::cout << "Invalid Input" << std::endl;
    }
}
