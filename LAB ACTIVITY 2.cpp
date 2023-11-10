#include <iostream>

int main() {
    // Prompt user to enter an integer
    std::cout << "Enter an integer (1-7): ";

    // Read user input
    int dayNumber;
    std::cin >> dayNumber;

    // Check the entered number and output the corresponding day
    switch (dayNumber) {
        case 1:
            std::cout << "Sunday" << std::endl;
            break;
        case 2:
            std::cout << "Monday" << std::endl;
            break;
        case 3:
            std::cout << "Tuesday" << std::endl;
            break;
        case 4:
            std::cout << "Wednesday" << std::endl;
            break;
        case 5:
            std::cout << "Thursday" << std::endl;
            break;
        case 6:
            std::cout << "Friday" << std::endl;
            break;
        case 7:
            std::cout << "Saturday" << std::endl;
            break;
        default:
            std::cout << "Day not available!" << std::endl;
            break;
    }

    return 0;
}





