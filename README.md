# Exp-3-Operators
# Aim
1. Take two numbers as input from user and perform arithmetic operations on those numbers.
2. Take two numbers as input from user and perform comparison operations on those numbers.
3. Take two numbers as input from user and perform logical operations on those numbers. (Take values of a and b as either true or false in the code)
# Software Used
VS Code and c++ online compiler.
# Theory
The cin command is used to accept user input, and operators (+, -, *, /) are applied to calculate the results.

This code compares two numbers using relational operators like == (equal to), != (not equal to), >, <, >=, and <= and uses conditional statements (if, else) to display the comparison results.

In this code, two boolean values (true or false, represented as 1 or 0) are input, and logical operators such as AND (&&), OR (||), and NOT (!) are applied.
# Program Code
```
//Performance of basic arithmetic operations

#include <iostream>
using namespace std;
int main() {
    float num1, num2;
    cout << "Enter the first number: ";
    cin >> num1;
    cout << "Enter the second number: ";
    cin >> num2;
    cout << "\nResults of arithmetic operations:\n";
    cout << "Addition (num1 + num2): " << num1 + num2 << endl;
    cout << "Subtraction (num1 - num2): " << num1 - num2 << endl;
    cout << "Multiplication (num1 * num2): " << num1 * num2 << endl;
    if (num2 != 0) {
        cout << "Division (num1 / num2): " << num1 / num2 << endl;
    } else {
        cout << "Division by zero is not allowed!" << endl;
    }

    return 0;
}
```
```
//Performance of comparison operations

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
```
```
//Performance of logical operations

#include <iostream>
using namespace std;
int main() {
    bool a, b;
    cout << "Enter the value for a (1 for true, 0 for false): ";
    cin >> a;
    cout << "Enter the value for b (1 for true, 0 for false): ";
    cin >> b;
    cout << "\nResults of logical operations:\n";
    cout << "a AND b (a && b): " << (a && b) << endl;
    cout << "a OR b (a || b): " << (a || b) << endl;
    cout << "NOT a (!a): " << (!a) << endl;
    cout << "NOT b (!b): " << (!b) << endl;
    return 0;
}
```
# Output
### Arithmetic operations
![image](https://github.com/user-attachments/assets/fe66487f-ad33-44d7-805d-2859ba924f1a)
### Comparison operations
![image](https://github.com/user-attachments/assets/70d7e97d-a798-48bd-8ea4-e0ea661acc4b)
### Logical operations
![image](https://github.com/user-attachments/assets/9ae618d8-4f03-49f0-9d6a-7aa8ba11996a)
# Conclusion
We learnt how to handle basic arithmetic, comparison, and logical operations, which are crucial in making complex decisions and computations in C++.
