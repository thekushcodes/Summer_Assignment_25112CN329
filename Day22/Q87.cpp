// Program to check character frequency

#include <iostream>
using namespace std;

int main() {
    char s[100], ch;
    cin >> s;
    cin >> ch;

    int count = 0;

    for (int i = 0; s[i] != '\0'; i++) {
        if (s[i] == ch) {
            count++;
        }
    }

    cout << count;

    return 0;
}