/*
 * Author:
 * Date:
 * Name:
 */

#include <iostream>
#include <vector>
#include "task_1.h"
#include "task_2.h"
#include "task_3.h"
#include "task_4.h"
#include "task_5.h"

int main() {
    std::vector<std::string> bookTitles;
    bookTitles.push_back("Catcher in the Rye");
    bookTitles.push_back("Pride and Prejudice");
    bookTitles.push_back("To Kill a Mockingbird");
    bookTitles.push_back("The Great Gatsby");
    bookTitles.push_back("Moby Dick");

    // Sorting using Bubble Sort
    task_1::bubbleSort(bookTitles);

    // Displaying the sorted list of book titles
    std::cout << "Sorted List of Book Titles:\n";
    for (std::vector<std::string>::const_iterator it = bookTitles.begin(); it != bookTitles.end(); ++it) {
        const std::string& title = *it;
        std::cout << title << '\n';
    }



    std::cout << "Task 2" << std::endl;
    std::vector<int> denominations = {50, 10, 20, 5, 1, 100, 2, 500};
    task_2::selectionSort(denominations);
    std::cout << "Sorted Denominations:\n";
    for (const auto& denomination : denominations) {
        std::cout << denomination << ' ';
    }




    std::cout << "Task 3" << std::endl;
    std::vector<std::string> soldiers = {"Alpha", "Bravo", "Charlie", "Delta", "Echo"};
    task_3::rearrangeSoldiers(soldiers);
    std::cout << "Rearranged Soldiers: ";
    for (const auto& soldier : soldiers) {
        std::cout << soldier << ' ';
    }





    std::cout << "Task 4" << std::endl;
    std::vector<int> arr = {5, 2, 8, 1, 4, 6};
    int count = task_4::countElements(arr);
    std::cout << "Count of Elements: " << count << std::endl;



    std::cout << "Task 5" << std::endl;
    std::vector<std::vector<char>> matrix = {
            {'b', 'b', 'w', 'b', 'b', 'y'},
            {'w', 'w', 'b', 'b', 'w', 'w'},
            {'b', 'b', 'w', 'w', 'b', 'b'},
            {'y', 'y', 'b', 'b', 'y', 'y'},
            {'w', 'w', 'b', 'b', 'b', 'b'},
            {'y', 'e', 'y', 'e', 'y', 'w'},
            {'w', 'b', 'b', 'w', 'w', 'w'},
            {'w', 'w', 'w', 'w', 'y', 'w'}
    };

    // Display the visual representation of colors
    task_5::displayColors(matrix);
}
