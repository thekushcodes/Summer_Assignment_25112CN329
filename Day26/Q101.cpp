// Program to create number guessing game

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    srand(time(0));

    int num = rand() % 100 + 1;
    int guess;

    do {
        cin >> guess;

        if (guess < num) {
            cout << "Too Low" << endl;
        }
        else if (guess > num) {
            cout << "Too High" << endl;
        }
        else {
            cout << "Correct Guess" << endl;
        }

    } while (guess != num);

    return 0;
}