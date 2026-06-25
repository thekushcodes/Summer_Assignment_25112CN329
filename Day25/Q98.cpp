// Program to find common characters in strings

#include <iostream>
#include <unordered_set>
using namespace std;

int main() {
    string s1, s2;
    cin >> s1 >> s2;

    unordered_set<char> st1, st2;

    for (char ch : s1) {
        st1.insert(ch);
    }

    for (char ch : s2) {
        st2.insert(ch);
    }

    for (char ch : st1) {
        if (st2.find(ch) != st2.end()) {
            cout << ch << " ";
        }
    }

    return 0;
}