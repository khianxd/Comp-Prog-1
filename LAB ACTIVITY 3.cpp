#include <iostream>

int main() {
    // Constants
    const double basicSalary = 12000;
    const double daPercentage = 0.12;
    const double hra = 150;
    const double ta = 120;
    const double others = 450;
    const double pfPercentage = 0.14;
    const double itPercentage = 0.15;

    // Calculations
    double da = basicSalary * daPercentage;
    double pf = basicSalary * pfPercentage;
    double it = basicSalary * itPercentage;

    double netSalary = basicSalary + da + hra + ta + others - (pf + it);

    // Display the net salary
    std::cout << "Net Salary: $" << netSalary << std::endl;

    return 0;
}
