// Program to find pair with given sum.

#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, sum;
    cin >> n;

    int a[n];
    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }

    cin >> sum;

    bool found = false;

    for(int i = 0; i < n; i++) {
        for(int j = i + 1; j < n; j++) {
            if(a[i] + a[j] == sum) {
                cout << a[i] << " " << a[j];
                found = true;
                break;
            }
        }

        if(found) {
            break;
        }
    }

    if(!found) {
        cout << "No pair found";
    }

    return 0;
}