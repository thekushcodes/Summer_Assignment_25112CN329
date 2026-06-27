// Program to create salary management system

#include <iostream>
#include <vector>
using namespace std;

struct Employee {
    int id;
    string name;
    float basicSalary;
    float bonus;
};

int main() {
    int n;
    cin >> n;

    vector<Employee> employees(n);

    for (int i = 0; i < n; i++) {
        cin >> employees[i].id;
        cin >> employees[i].name;
        cin >> employees[i].basicSalary;
        cin >> employees[i].bonus;
    }

    cout << "Salary Details" << endl;

    for (int i = 0; i < n; i++) {
        float totalSalary = employees[i].basicSalary + employees[i].bonus;

        cout << "ID: " << employees[i].id << endl;
        cout << "Name: " << employees[i].name << endl;
        cout << "Total Salary: " << totalSalary << endl;
    }

    return 0;
}