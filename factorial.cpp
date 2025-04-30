// Copyright (c) 2025. Joseph Wondimagnehu. All rights reserved.
//
// Created by: Joseph Wondimagnehu
// Date: Apr. 29, 2025
/* This program calculates the factorial of a
whole number entered by the user. */

/* Include the iostream library for
input and output functionalities. */
#include <iostream>
/* Include the string library to
adhere to style guidelines. */
#include <string>

// Runs the main function.
int main() {
    // Initialize the loop counter to zero.
    int loopCounter = 0;
    // Initialize the factorial answer to one.
    int factorialAnswer = 1;
    // Declare the user number variable as a string.
    std::string userNumberStr;

    // Ask the user to enter a whole number.
    std::cout << "\nEnter a whole number: ";
    /* Store the input into the string version
    of the user number variable. */
    std::cin >> userNumberStr;

    /* Try to validate and proceed 
    with the user's input. */
    try {
        /* Attempt to convert the entered string 
        into a float for further validation. */
        float userNumberFloat = stof(userNumberStr);

        /* Check if the float and its casted integer version
        are equal, meaning it is an integer, and check if the
        number is greater than or equal to 0. */
        if (userNumberFloat == static_cast<int>(userNumberFloat)
        && userNumberFloat >= 0) {
            /* Proceed to the do..while loop for determining 
            the factorial of the whole number. */
            do {
                // Increment the loop counter by one.
                loopCounter = loopCounter + 1;
                // Multiply the factorial answer by the loop counter.
                factorialAnswer = factorialAnswer * loopCounter;
            /* Repeat this while the loop counter is less than
            the user's valid whole number. */
            } while (loopCounter < userNumberFloat);

            // Display the resulting factorial answer.
            std::cout << "\n" << userNumberFloat << "! = "
            << factorialAnswer << ".\n";
        } else {
            // Otherwise, the user entered a negative integer.
            /* Display to them that they 
            did not enter a whole number. */
            std::cout << "\n" << userNumberFloat
            << " is not a whole number.\n";
        }
    }
    /* Runs if stof() could not convert the user's string
    input into a float. */
    catch (std::invalid_argument) {
        /* Display to the user that they
        did not enter a whole number. */
        std::cout << "\n" << userNumberStr
        << " is not a whole number.\n";
    }

    // Finally, thank the user for using this program.
    std::cout << "\nThanks for using this program!\n";
}
