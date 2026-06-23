// Program to find first repeating character

#include <iostream>
#include <unordered_set>
using namespace std;

int main() {
    string s;
    cin >> s;

    unordered_set<char> st;

    for (char ch : s) {
        if (st.find(ch) != st.end()) {
            cout << ch;
            return 0;
        }
        st.insert(ch);
    }

    cout << "-1";

    return 0;
}