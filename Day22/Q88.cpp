// Program to remove spaces from a string

#include <iostream>
using namespace std;

int main() {
    char s[100];
    cin.getline(s, 100);

    for (int i = 0; s[i] != '\0'; i++) {
        if (s[i] != ' ') {
            cout << s[i];
        }
    }

    return 0;
}