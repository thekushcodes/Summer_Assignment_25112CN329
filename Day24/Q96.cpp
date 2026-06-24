// Program to remove duplicate characters

#include <iostream>
#include <unordered_set>
using namespace std;

int main() {
    string s;
    cin >> s;

    unordered_set<char> st;
    string ans = "";

    for (char ch : s) {
        if (st.find(ch) == st.end()) {
            ans += ch;
            st.insert(ch);
        }
    }

    cout << ans;

    return 0;
}