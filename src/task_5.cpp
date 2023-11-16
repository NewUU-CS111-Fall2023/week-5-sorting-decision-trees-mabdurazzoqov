//
// Created by Mirzohid Abdurazzoqov on 16/11/23.
//

#include "task_5.h"
#include <iostream>

namespace task_5 {
    void displayColors(const std::vector<std::vector<char>>& matrix) {
        char blue = 'b';
        char yellow = 'y';
        char white = 'w';

        for (const auto& row : matrix) {
            for (char symbol : row) {
                if (symbol == blue) {
                    std::cout << "\033[34m";
                } else if (symbol == yellow) {
                    std::cout << "\033[33m";
                } else if (symbol == white) {
                    std::cout << "\033[37m";
                } else {
                    std::cout << symbol;
                }

                std::cout << " ";
            }

            std::cout << "\n";
        }

        std::cout << "\033[0m";
    }
}