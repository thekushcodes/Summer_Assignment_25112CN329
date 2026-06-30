// Program to create mini employee management system

#include <iostream>
using namespace std;

struct Employee
{
    int id;
    string name;
    string department;
    float salary;
};

Employee e[100];
int n = 0;

void addEmployee()
{
    cout << "Enter Employee ID: ";
    cin >> e[n].id;

    cin.ignore();

    cout << "Enter Employee Name: ";
    getline(cin, e[n].name);

    cout << "Enter Department: ";
    getline(cin, e[n].department);

    cout << "Enter Salary: ";
    cin >> e[n].salary;

    n++;

    cout << "Employee Added Successfully.\n";
}

void displayEmployees()
{
    if (n == 0)
    {
        cout << "No Employee Records Found.\n";
        return;
    }

    for (int i = 0; i < n; i++)
    {
        cout << "\nEmployee " << i + 1 << endl;
        cout << "ID         : " << e[i].id << endl;
        cout << "Name       : " << e[i].name << endl;
        cout << "Department : " << e[i].department << endl;
        cout << "Salary     : " << e[i].salary << endl;
    }
}

void searchEmployee()
{
    int id;

    cout << "Enter Employee ID: ";
    cin >> id;

    for (int i = 0; i < n; i++)
    {
        if (e[i].id == id)
        {
            cout << "Employee Found\n";
            cout << "Name       : " << e[i].name << endl;
            cout << "Department : " << e[i].department << endl;
            cout << "Salary     : " << e[i].salary << endl;
            return;
        }
    }

    cout << "Employee Not Found.\n";
}

void deleteEmployee()
{
    int id;

    cout << "Enter Employee ID: ";
    cin >> id;

    for (int i = 0; i < n; i++)
    {
        if (e[i].id == id)
        {
            for (int j = i; j < n - 1; j++)
            {
                e[j] = e[j + 1];
            }

            n--;

            cout << "Employee Deleted Successfully.\n";
            return;
        }
    }

    cout << "Employee Not Found.\n";
}

int main()
{
    int choice;

    do
    {
        cout << "\n===== Mini Employee Management System =====\n";
        cout << "1. Add Employee\n";
        cout << "2. Display Employees\n";
        cout << "3. Search Employee\n";
        cout << "4. Delete Employee\n";
        cout << "5. Exit\n";
        cout << "Enter Choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            addEmployee();
            break;

        case 2:
            displayEmployees();
            break;

        case 3:
            searchEmployee();
            break;

        case 4:
            deleteEmployee();
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