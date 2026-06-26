// Program to create quiz application

#include <iostream>
using namespace std;

int main() {
    int score = 0;
    int ans;

    cout << "1. What is the capital of India?" << endl;
    cout << "1. Mumbai  2. Delhi  3. Chennai  4. Kolkata" << endl;
    cin >> ans;

    if (ans == 2) {
        score++;
    }

    cout << "2. How many days are there in a week?" << endl;
    cout << "1. 5  2. 6  3. 7  4. 8" << endl;
    cin >> ans;

    if (ans == 3) {
        score++;
    }

    cout << "3. What is 5 + 3?" << endl;
    cout << "1. 6  2. 7  3. 8  4. 9" << endl;
    cin >> ans;

    if (ans == 3) {
        score++;
    }

    cout << "Final Score = " << score;

    return 0;
}