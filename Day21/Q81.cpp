// Program to find string length without strlen()

#include <iostream>
using namespace std;

int main() {
    char s[100];
    cin >> s;

    int len = 0;

    while (s[len] != '\0') {
        len++;
    }

    cout << len;

    return 0;
}