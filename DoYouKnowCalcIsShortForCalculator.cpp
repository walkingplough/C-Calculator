#include <iostream>
#include <string>

int main() {
    double num1, num2;
    char operation;
    std::string reCalculate;

    bool continueCalculating = true;

    while (continueCalculating) {
        std::cout << "Write the first number: ";
        std::cin >> num1;
        std::cout << "Write your operation (+, -, *, /): ";
        std::cin >> operation;
        std::cout << "Write the second number: ";
        std::cin >> num2;

        // Perform calculation
        if (operation == '+') {
            std::cout << "Result: " << num1 + num2 << '\n';
        }
        else if (operation == '-') {
            std::cout << "Result: " << num1 - num2 << '\n';
        }
        else if (operation == '*') {
            std::cout << "Result: " << num1 * num2 << '\n';
        }
        else if (operation == '/') {
            if (num2 != 0) {
                std::cout << "Result: " << num1 / num2 << '\n';
            }
            else {
                std::cout << "Error: You cannot divide by zero! Please try again.";
            }
        }
        else {
            std::cout << "Invalid operation! Please use +, -, *, or /.";
        }


        std::cout << "Do you want to do another calculation? (Yes or No): ";
        std::cin >> reCalculate;


        for (char& c : reCalculate) {
            c = tolower(c);
        }

        if (reCalculate != "yes" && reCalculate != "y") {
            continueCalculating = false;
        }
    }

    std::cout << "Thank you for using my calculator!";

    return 0;
}
