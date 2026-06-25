// Program to sort names alphabetically

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<string> names(n);

    for (int i = 0; i < n; i++) {
        cin >> names[i];
    }

    sort(names.begin(), names.end());

    for (string name : names) {
        cout << name << " ";
    }

    return 0;
}