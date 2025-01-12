#include <iostream>
#include <sstream> 
using namespace std;

void showMenu()
{
    cout << "=============================" << endl;
    cout << "      Basic Calculator       " << endl;
    cout << "=============================" << endl;
    cout << "Enter your equation (e.g., 5+7 or 8/4)." << endl;
    cout << "Supported operators: +, -, *, /" << endl;
    cout << "Type 'exit' to quit." << endl;
    cout << "=============================" << endl;
}

int main()
{
    string input;
    double num1, num2;
    char op;

    showMenu();

    while (true)
    {
        cout << "Enter your equation: ";
        cin >> input;

       
        if (input == "exit")
        {
            cout << "Thank you for using the calculator. Goodbye!" << endl;
            break;
        }

       
        stringstream ss(input);
        ss >> num1 >> op >> num2;

       
        switch (op)
        {
        case '+':
            cout << "Result: " << num1 + num2 << endl;
            break;
        case '-':
            cout << "Result: " << num1 - num2 << endl;
            break;
        case '*':
            cout << "Result: " << num1 * num2 << endl;
            break;
        case '/':
            if (num2 != 0)
                cout << "Result: " << num1 / num2 << endl;
            else
                cout << "Error: Division by zero!" << endl;
            break;
        default:
            cout << "Invalid operator. Please use +, -, *, or /." << endl;
            break;
        }
    }

    return 0;
}
