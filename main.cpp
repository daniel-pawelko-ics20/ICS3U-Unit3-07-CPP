// Copyright (c) 2021 Daniel Pawelko All rights reserved.
//
// Created by: Daniel Pawelko
// Created on: Oct 2021
// Grandmother A

#include <iostream>
#include <string>

int main() {
    // main function for grandmother A

    // define variables
    std::string integerAsString;
    int age;

    // input
    std::cout << "Please enter your age: " << std::endl;
    std::cin >> integerAsString;

    // process/output
    try {
        age = std::stoi(integerAsString);
        if (age > 40 || age < 25) {
            std::cout << "You are NOT an acceptable age" << std::endl;
        } else {
            std::cout << "You are an appropriate age" << std::endl;
        }
    } catch (std::invalid_argument) {
        std::cout << "Input must be an integer" << std::endl;
    }

    // output finished
    std::cout << std::endl;
    std::cout << "Done." << std::endl;
}
