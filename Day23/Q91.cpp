// Program to check anagram strings

#include <iostream>
#include <unordered_map>
using namespace std;

int main() {
    string s1, s2;
    cin >> s1 >> s2;

    if (s1.length() != s2.length()) {
        cout << "Not Anagram";
        return 0;
    }

    unordered_map<char, int> mp;

    for (char ch : s1) {
        mp[ch]++;
    }

    for (char ch : s2) {
        mp[ch]--;
    }

    for (auto x : mp) {
        if (x.second != 0) {
            cout << "Not Anagram";
            return 0;
        }
    }

    cout << "Anagram";

    return 0;
}