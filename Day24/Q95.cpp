// Program to find longest word

#include <iostream>
#include <sstream>
using namespace std;

int main() {
    string s;
    getline(cin, s);

    string word, ans = "";
    stringstream ss(s);

    while (ss >> word) {
        if (word.length() > ans.length()) {
            ans = word;
        }
    }

    cout << ans;

    return 0;
}