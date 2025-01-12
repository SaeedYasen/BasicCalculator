#include <iostream>
using namespace std;

void showMenu() {
    cout << "=============================" << endl;
    cout << "      Basic Calculator       " << endl;
    cout << "=============================" << endl;
    cout << "1. Addition (+)" << endl;
    cout << "2. Subtraction (-)" << endl;
    cout << "3. Multiplication (*)" << endl;
    cout << "4. Division (/)" << endl;
    cout << "5. Exit" << endl;
    cout << "Enter your choice: ";
}

int main() {
    int choice;
    double num1, num2;

    do {
        showMenu();
        cin >> choice;

        if (choice >= 1 && choice <= 4) {
            cout << "Enter first number: ";
            cin >> num1;
            cout << "Enter second number: ";
            cin >> num2;

            switch (choice) {
                case 1:
                    cout << "Result: " << num1 + num2 << endl;
                    break;
                case 2:
                    cout << "Result: " << num1 - num2 << endl;
                    break;
                case 3:
                    cout << "Result: " << num1 * num2 << endl;
                    break;
                case 4:
                    if (num2 != 0)
                        cout << "Result: " << num1 / num2 << endl;
                    else
                        cout << "Error: Division by zero!" << endl;
                    break;
            }
        } else if (choice != 5) {
            cout << "Invalid choice. Please try again." << endl;
        }
    } while (choice != 5);

    cout << "Thank you for using the calculator. Goodbye!" << endl;
    return 0;
}
