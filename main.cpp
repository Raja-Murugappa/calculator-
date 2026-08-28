#include <iostream>
#include "calculator.h"

using namespace std;

int main()
{
    int choice;
    int a, b;

    while (true)
    {
        cout << "\n===== CALCULATOR =====\n";
        cout << "1. Addition\n";
        cout << "2. Subtraction\n";
        cout << "3. Multiplication\n";
        cout << "4. Division\n";
        cout << "5. Exit\n";

        cout << "Enter choice: ";
        cin >> choice;

        if (choice == 5)
        {
            cout << "Program exited.\n";
            break;
        }

        cout << "Enter first number: ";
        cin >> a;

        cout << "Enter second number: ";
        cin >> b;

        switch (choice)
        {
            case 1:
                cout << "Result: " << add(a, b) << endl;
                break;

            case 2:
                cout << "Result: " << subtract(a, b) << endl;
                break;

            case 3:
                cout << "Result: " << multiply(a, b) << endl;
                break;

            case 4:
                if (b == 0)
                    cout << "Cannot divide by zero.\n";
                else
                    cout << "Result: " << divide(a, b) << endl;
                break;

            default:
                cout << "Invalid choice!\n";
        }
    }

    return 0;
}