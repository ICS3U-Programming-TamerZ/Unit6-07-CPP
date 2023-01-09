// Copyright (c) 2022 Tamer Zreg All rights reserved.
// .
// Created by: Tamer Zreg
// Date : Dec 30, 2022
// This program parses the user's string and
// prints each word on a new line

#include <bits/stdc++.h>

#include <iostream>

void DisplayWordsWithoutSpaces(std::string aString) {
    std::string word = "";
    for (auto iter : aString) {
        if (iter == ' ') {
            std::cout << word << "\n";
            word = "";
        } else {
            word = word + iter;
        }
    }
    std::cout << word << "\n";
}

int main() {
    std::string userString;

    std::cout << "Enter a string: ";
    std::getline(std::cin, userString);

    DisplayWordsWithoutSpaces(userString);
}
