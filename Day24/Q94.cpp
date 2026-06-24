// Program to compress a string

#include <iostream>
using namespace std;

int main() {
    string s;
    cin >> s;

    string ans = "";
    int cnt = 1;

    for (int i = 1; i < s.length(); i++) {
        if (s[i] == s[i - 1]) {
            cnt++;
        }
        else {
            ans += s[i - 1];
            ans += to_string(cnt);
            cnt = 1;
        }
    }

    ans += s[s.length() - 1];
    ans += to_string(cnt);

    cout << ans;

    return 0;
}