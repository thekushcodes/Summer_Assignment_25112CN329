// Program to create bank account system

#include <iostream>
#include <vector>
using namespace std;

struct Account
{
    int accNo;
    string name;
    float balance;
};

void createAccount(vector<Account> &bank)
{
    Account a;

    cout << "Enter Account Number: ";
    cin >> a.accNo;

    cin.ignore();

    cout << "Enter Account Holder Name: ";
    getline(cin, a.name);

    cout << "Enter Initial Balance: ";
    cin >> a.balance;

    bank.push_back(a);

    cout << "Account Created Successfully.\n";
}

void displayAccounts(vector<Account> &bank)
{
    if (bank.empty())
    {
        cout << "No Accounts Found.\n";
        return;
    }

    for (int i = 0; i < bank.size(); i++)
    {
        cout << "\nAccount " << i + 1 << endl;
        cout << "Account Number : " << bank[i].accNo << endl;
        cout << "Name           : " << bank[i].name << endl;
        cout << "Balance        : " << bank[i].balance << endl;
    }
}

void depositMoney(vector<Account> &bank)
{
    int accNo;
    float amount;

    cout << "Enter Account Number: ";
    cin >> accNo;

    for (int i = 0; i < bank.size(); i++)
    {
        if (bank[i].accNo == accNo)
        {
            cout << "Enter Amount: ";
            cin >> amount;

            bank[i].balance += amount;

            cout << "Amount Deposited Successfully.\n";
            return;
        }
    }

    cout << "Account Not Found.\n";
}

void withdrawMoney(vector<Account> &bank)
{
    int accNo;
    float amount;

    cout << "Enter Account Number: ";
    cin >> accNo;

    for (int i = 0; i < bank.size(); i++)
    {
        if (bank[i].accNo == accNo)
        {
            cout << "Enter Amount: ";
            cin >> amount;

            if (amount > bank[i].balance)
            {
                cout << "Insufficient Balance.\n";
            }
            else
            {
                bank[i].balance -= amount;
                cout << "Amount Withdrawn Successfully.\n";
            }

            return;
        }
    }

    cout << "Account Not Found.\n";
}

void searchAccount(vector<Account> &bank)
{
    int accNo;

    cout << "Enter Account Number: ";
    cin >> accNo;

    for (int i = 0; i < bank.size(); i++)
    {
        if (bank[i].accNo == accNo)
        {
            cout << "Account Found\n";
            cout << "Name    : " << bank[i].name << endl;
            cout << "Balance : " << bank[i].balance << endl;
            return;
        }
    }

    cout << "Account Not Found.\n";
}

int main()
{
    vector<Account> bank;
    int choice;

    do
    {
        cout << "\n===== Bank Account System =====\n";
        cout << "1. Create Account\n";
        cout << "2. Display Accounts\n";
        cout << "3. Deposit Money\n";
        cout << "4. Withdraw Money\n";
        cout << "5. Search Account\n";
        cout << "6. Exit\n";
        cout << "Enter Choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            createAccount(bank);
            break;

        case 2:
            displayAccounts(bank);
            break;

        case 3:
            depositMoney(bank);
            break;

        case 4:
            withdrawMoney(bank);
            break;

        case 5:
            searchAccount(bank);
            break;

        case 6:
            cout << "Thank You!\n";
            break;

        default:
            cout << "Invalid Choice.\n";
        }

    } while (choice != 6);

    return 0;
}