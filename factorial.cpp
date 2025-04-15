// Copyright (c) 2025 Atri Sarker All rights reserved.
// .
// Created By: Atri S
// Date: April 14, 2025
// Program that calculates the product of 1*2*3...*n,
// (AKA a factorial)
// where n is a non-negative integer given by the user.
// The sum will be calculated through the use of a while loop.

#include <cstdio>
#include <iostream>
#include <string>

int main() {
    // Get the user's input as a string
    std::string userInput;
    std::cout << "Enter a non-negative integer: ";
    std::getline(std::cin, userInput);

    try {
        size_t pos;
        // Convert the user's guess to an integer
        // pos will be equal to the length of the input converted
        int userNum = std::stoi(userInput, &pos);

        // REFUSE FLOATS
        if (pos != userInput.length()) {
            throw std::invalid_argument("NO FLOATS");
        }

        // Check if the user's number is positive (or 0)
        if (userNum >= 0) {
            // Initialize variables for the loop
            int product = 1;
            int counter = 0;
            // Loop while counter is less than user_num
            do {
                // Increment counter by 1
                counter += 1;
                // Multiply product by counter
                product *= counter;
            } while (counter < userNum);
            // Display the product
            printf("%i! = %i\n", userNum, product);
        } else {
            // Tell the user that the number can't be negative
            printf("Number must be a non-negative integer!\n");
        }
    } catch (std::invalid_argument) {
        // Tell the user that their input wasn't an integer
        std::cout << userInput;
        std::cout << " is not an integer.\n";
    }
    // Program completion message
    printf("Thanks for playing!\n");
}
