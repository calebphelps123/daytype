// daytype.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "dayType.h"

int main() {
    dayType day1; // Default constructor (Sunday)
    day1.printDay(); // Output: Sunday

    std::cout << "Previous day: " << day1.getPreviousDay() << std::endl; // Output: Saturday
    std::cout << "Next day: " << day1.getNextDay() << std::endl; // Output: Monday

    dayType day2("Monday"); // Constructor with parameter
    std::cout << "Current day: " << day2.getDay() << std::endl; // Output: Monday

    day2.addDays(3); // Add 3 days
    std::cout << "New day after adding 3 days: " << day2.getDay() << std::endl; // Output: Thursday