// Program to sort words by length

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool cmp(string a, string b) {
    return a.length() < b.length();
}

int main() {
    int n;
    cin >> n;

    vector<string> words(n);

    for (int i = 0; i < n; i++) {
        cin >> words[i];
    }

    sort(words.begin(), words.end(), cmp);

    for (string word : words) {
        cout << word << " ";
    }

    return 0;
}