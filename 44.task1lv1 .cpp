#include <iostream>
using namespace std;

double add(double x, double y) {
    return x + y;
}

double subtract(double x, double y) {
    return x - y;
}

double multiply(double x, double y) {
    return x * y;
}

double divide(double x, double y) {
    if (y == 0) {
        cout << "Error: Cannot divide by zero!" << endl;
        return 0;
    }
    return x / y;
}

int main() {
    cout << "Welcome to the Calculator Program!" << endl;
    
    while (true) {
        cout << "\nPlease select an operation:" << endl;
        cout << "1. Addition" << endl;
        cout << "2. Subtraction" << endl;
        cout << "3. Multiplication" << endl;
        cout << "4. Division" << endl;
        cout << "5. Exit" << endl;
        
        char choice;
        cin >> choice;
        
        if (choice == '5') {
            cout << "Thank you for using the Calculator Program. Goodbye!" << endl;
            break;
        }
        
        if (choice < '1' || choice > '4') {
            cout << "Invalid input! Please choose a valid operation." << endl;
            continue;
        }
        
        double num1, num2;
        cout << "Enter the first number: ";
        cin >> num1;
        
        cout << "Enter the second number: ";
        cin >> num2;
        
        switch (choice) {
            case '1':
                cout << "Result: " << add(num1, num2) << endl;
                break;
            case '2':
                cout << "Result: " << subtract(num1, num2) << endl;
                break;
            case '3':
                cout << "Result: " << multiply(num1, num2) << endl;
                break;
            case '4':
                cout << "Result: " << divide(num1, num2) << endl;
                break;
            default:
                cout << "Invalid choice! Please try again." << endl;
                break;
        }
    }
    
    return 0;
}


