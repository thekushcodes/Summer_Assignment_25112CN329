// Program to create student record management system

#include <iostream>
#include <vector>
using namespace std;

struct Student {
    int rollNo;
    string name;
    float marks;
};

int main() {
    int n;
    cin >> n;

    vector<Student> students(n);

    for (int i = 0; i < n; i++) {
        cin >> students[i].rollNo;
        cin >> students[i].name;
        cin >> students[i].marks;
    }

    cout << "Student Records" << endl;

    for (int i = 0; i < n; i++) {
        cout << "Roll No: " << students[i].rollNo << endl;
        cout << "Name: " << students[i].name << endl;
        cout << "Marks: " << students[i].marks << endl;
    }

    return 0;
}