#include <iostream>
#include <limits>

// Function prototypes
void displayMenu();
double getNumber();
char getOperator();
double calculate(double num1, double num2, char op);

int main() {
    double num1, num2, result;
    char op; 
    char choice;
    
    do {
       system("cls"); // Clear screen (for Windows, use "clear" for Unix/Linux)
        
        std::cout << "==== BASIC CALCULATOR ====" << std::endl;
        
        // Get first number
        std::cout << "Enter first number: ";
        num1 = getNumber();
        
        // Get operator
        op = getOperator();
        
        // Get second number
        std::cout << "Enter second number: ";
        num2 = getNumber();
        
        // Calculate and display result
        try {
            result = calculate(num1, num2, op);
            std::cout << "\nResult: " << num1 << " " << op << " " << num2 << " = " << result << std::endl;
        }
        catch (const char* error) {
            std::cout << "\nError: " << error << std::endl;
        }
        
        // Ask if user wants to continue
        std::cout << "\nDo you want to perform another calculation? (y/n): ";
        std::cin >> choice;
        
        // Clear input buffer
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        
    } while (choice == 'y' || choice == 'Y');
    
    std::cout << "\nThank you for using the calculator. Goodbye!" << std::endl;
    
    return 0;
}

// Function to display menu of operations
void displayMenu() {
    std::cout << "\nOperations:" << std::endl;
    std::cout << "+ : Addition" << std::endl;
    std::cout << "- : Subtraction" << std::endl;
    std::cout << "* : Multiplication" << std::endl;
    std::cout << "/ : Division" << std::endl;
}

// Function to get a valid number from user
double getNumber() {
    double num;
    while (!(std::cin >> num)) {
        std::cin.clear();  // Clear error flags
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');  // Discard invalid input
        std::cout << "Invalid input. Please enter a number: ";
    }
    
    // Clear input buffer
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    
    return num;
}

// Function to get a valid operator from user
char getOperator() {
    char op;
    bool validOp = false;
    
    do {
        displayMenu();
        std::cout << "Choose an operation: ";
        std::cin >> op;
        
        // Clear input buffer
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        
        if (op == '+' || op == '-' || op == '*' || op == '/') {
            validOp = true;
        } else {
            std::cout << "Invalid operator. Please try again." << std::endl;
        }
        
    } while (!validOp);
    
    return op;
}

// Function to calculate result based on operator
double calculate(double num1, double num2, char op) {
    switch (op) {
        case '+':
            return num1 + num2;
        case '-':
            return num1 - num2;
        case '*':
            return num1 * num2;
        case '/':
            if (num2 == 0) {
                throw "Division by zero is not allowed";
            }
            return num1 / num2;
        default:
            throw "Invalid operator";
    }
}