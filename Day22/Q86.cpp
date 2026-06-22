// Program to count words in a sentence

#include <iostream>
using namespace std;

int main() {
    char s[100];
    cin.getline(s, 100);

    int words = 1;

    for (int i = 0; s[i] != '\0'; i++) {
        if (s[i] == ' ') {
            words++;
        }
    }

    cout << words;

    return 0;
}