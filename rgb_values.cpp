// Copyright (c) 2022 Peter Gemmell All rights reserved

// Created by Peter Gemmell
// Created on May 2022
// This program calculates the cost of pizza using constants

#include <iostream>

int main() {
    // process & output
    try {
        for (int integerOne = 255; integerOne < 256; integerOne++) {
            for (int integerTwo = 255; integerTwo < 256; integerTwo++) {
                 for (int integerThree = 0; integerThree < 256;
                    integerThree++) {
                     std::cout << "RGB, " << integerOne << ", " << integerTwo
                     << ", " << integerThree << std::endl;
                }
            }
        }
    } catch (std::invalid_argument) {
        std::cout << "Invalid Input.";
    }
    std::cout << "\nDone." << std::endl;
}
