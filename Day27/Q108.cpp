// Program to create marksheet generation system

#include <iostream>
using namespace std;

int main() {
    string name;
    int rollNo;
    float m1, m2, m3, m4, m5;

    cin >> name;
    cin >> rollNo;
    cin >> m1 >> m2 >> m3 >> m4 >> m5;

    float total = m1 + m2 + m3 + m4 + m5;
    float percentage = total / 5;
    char grade;

    if (percentage >= 90) {
        grade = 'A';
    }
    else if (percentage >= 80) {
        grade = 'B';
    }
    else if (percentage >= 70) {
        grade = 'C';
    }
    else if (percentage >= 60) {
        grade = 'D';
    }
    else {
        grade = 'F';
    }

    cout << "Marksheet" << endl;
    cout << "Name: " << name << endl;
    cout << "Roll No: " << rollNo << endl;
    cout << "Total Marks: " << total << endl;
    cout << "Percentage: " << percentage << endl;
    cout << "Grade: " << grade << endl;

    return 0;
}