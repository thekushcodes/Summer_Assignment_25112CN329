// Program to reverse a string

#include <iostream>
using namespace std;

int main() {
    char s[100];
    cin >> s;

    int len = 0;

    while (s[len] != '\0') {
        len++;
    }

    for (int i = len - 1; i >= 0; i--) {
        cout << s[i];
    }

    return 0;
}