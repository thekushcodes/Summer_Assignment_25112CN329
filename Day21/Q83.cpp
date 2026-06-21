// Program to count consonants and vowels

#include <iostream>
using namespace std;

int main() {
    char s[100];
    cin >> s;

    int vowels = 0, consonants = 0;

    for (int i = 0; s[i] != '\0'; i++) {
        if ((s[i] >= 'a' && s[i] <= 'z') || (s[i] >= 'A' && s[i] <= 'Z')) {
            if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u' ||
                s[i] == 'A' || s[i] == 'E' || s[i] == 'I' || s[i] == 'O' || s[i] == 'U') {
                vowels++;
            } else {
                consonants++;
            }
        }
    }

    cout << "Vowels = " << vowels << endl;
    cout << "Consonants = " << consonants << endl;

    return 0;
}