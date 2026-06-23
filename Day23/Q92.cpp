// Program to find maximum occuring character

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

    int maxi = 0;
    char ans;

    for (auto x : mp) {
        if (x.second > maxi) {
            maxi = x.second;
            ans = x.first;
        }
    }

    cout << ans;

    return 0;
}