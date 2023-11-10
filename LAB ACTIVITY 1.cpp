#include <iostream>
using namespace std;

int main() {

    std::cout << "Enter your age: ";


    int age;
    std::cin >> age;

    if (age >= 0 && age <= 12) {
        std::cout << "Child" << std::endl;
    } else if (age > 12 && age <= 18) {
        std::cout << "Teenager" << std::endl;
    } else if (age > 18 && age <= 40) {
        std::cout << "Adult" << std::endl;
    } else if (age > 40 && age <= 70) {
        std::cout << "Middle-aged" << std::endl;
    } else if (age > 70) {
        std::cout << "Aged" << std::endl;
    } else {
        std::cout << "Something is wrong" << std::endl;
    }

    return 0;
}
