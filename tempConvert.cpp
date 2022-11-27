// Copyright (c) 2022 Kevin Csiffary All rights reserved.
//
// Created by: Kevin Csiffary
// Date: Nov. 27, 2022
// This program converts celsius to fahrenheit in a function

#include <iostream>
#include <cmath>

// initialize floats
float celsiusFloat;
float fahrenheit;

void Fahrenheit() {
    // initialize string
    std::string celsiusString;

    // catch any errors
    try {
        // get user input for degrees celsius
        std::cout << "Enter temperature (°C): ";
        std::cin >> celsiusString;

        // cast the input into a float
        celsiusFloat = stof(celsiusString);

        // calculate fahrenheit
        fahrenheit = (9 / 5.0 * celsiusFloat + 32);

        // display result
        std::cout << celsiusFloat << "°C is "
        << round(fahrenheit * 100) / 100 << "°F\n";
    } catch (std::invalid_argument) {
        std::cout << "Please enter a valid temperature\n";
    }
}

int main() {
    Fahrenheit();
}
