// Program to create menu-driven calculator

#include <iostream>
using namespace std;

void add()
{
    float a, b;

    cout << "Enter Two Numbers: ";
    cin >> a >> b;

    cout << "Result = " << a + b << endl;
}

void subtract()
{
    float a, b;

    cout << "Enter Two Numbers: ";
    cin >> a >> b;

    cout << "Result = " << a - b << endl;
}

void multiply()
{
    float a, b;

    cout << "Enter Two Numbers: ";
    cin >> a >> b;

    cout << "Result = " << a * b << endl;
}

void divide()
{
    float a, b;

    cout << "Enter Two Numbers: ";
    cin >> a >> b;

    if (b == 0)
    {
        cout << "Division By Zero Not Possible.\n";
    }
    else
    {
        cout << "Result = " << a / b << endl;
    }
}

int main()
{
    int choice;

    do
    {
        cout << "\n===== Menu Driven Calculator =====\n";
        cout << "1. Addition\n";
        cout << "2. Subtraction\n";
        cout << "3. Multiplication\n";
        cout << "4. Division\n";
        cout << "5. Exit\n";
        cout << "Enter Choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            add();
            break;

        case 2:
            subtract();
            break;

        case 3:
            multiply();
            break;

        case 4:
            divide();
            break;

        case 5:
            cout << "Thank You!\n";
            break;

        default:
            cout << "Invalid Choice.\n";
        }

    } while (choice != 5);

    return 0;
}