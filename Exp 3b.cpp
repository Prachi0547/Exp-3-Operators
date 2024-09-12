#include <iostream>  
int main() {
    double num1, num2;  
    std::cout << "Enter the first number: ";
    std::cin >> num1;
    std::cout << "Enter the second number: ";
    std::cin >> num2;
    if (num1 == num2) {
        std::cout << num1 << " is equal to " << num2 << std::endl;
    } else {
        std::cout << num1 << " is not equal to " << num2 << std::endl;
    }
    if (num1 > num2) {
        std::cout << num1 << " is greater than " << num2 << std::endl;
    } else if (num1 < num2) {
        std::cout << num1 << " is less than " << num2 << std::endl;
    }
    if (num1 >= num2) {
        std::cout << num1 << " is greater than or equal to " << num2 << std::endl;
    } else {
        std::cout << num1 << " is less than or equal to " << num2 << std::endl;
    }
    return 0;  
}


