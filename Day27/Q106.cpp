// Program to create employee management system

#include <iostream>
#include <vector>
using namespace std;

struct Employee {
    int id;
    string name;
    float salary;
};

int main() {
    int n;
    cin >> n;

    vector<Employee> employees(n);

    for (int i = 0; i < n; i++) {
        cin >> employees[i].id;
        cin >> employees[i].name;
        cin >> employees[i].salary;
    }

    cout << "Employee Records" << endl;

    for (int i = 0; i < n; i++) {
        cout << "ID: " << employees[i].id << endl;
        cout << "Name: " << employees[i].name << endl;
        cout << "Salary: " << employees[i].salary << endl;
    }

    return 0;
}