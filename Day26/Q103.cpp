// Program to create ATM simulation

#include <iostream>
using namespace std;

int main() {
    int balance = 10000;
    int choice, amount;

    do {
        cout << "1. Check Balance" << endl;
        cout << "2. Deposit" << endl;
        cout << "3. Withdraw" << endl;
        cout << "4. Exit" << endl;

        cin >> choice;

        if (choice == 1) {
            cout << "Balance = " << balance << endl;
        }
        else if (choice == 2) {
            cin >> amount;
            balance += amount;
            cout << "Updated Balance = " << balance << endl;
        }
        else if (choice == 3) {
            cin >> amount;

            if (amount <= balance) {
                balance -= amount;
                cout << "Updated Balance = " << balance << endl;
            }
            else {
                cout << "Insufficient Balance" << endl;
            }
        }

    } while (choice != 4);

    return 0;
}