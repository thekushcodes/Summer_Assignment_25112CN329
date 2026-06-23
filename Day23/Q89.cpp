// Program to find first non-repeating character

#include <iostream>
#include <unordered_map>
using namespace std;

int main() {
    string s;
    cin >> s;

    unordered_map<char, int> mp;

    for (char ch : s) {
        mp[ch]++;
    }

    for (char ch : s) {
        if (mp[ch] == 1) {
            cout << ch;
            return 0;
        }
    }

    cout << "-1";

    return 0;
}