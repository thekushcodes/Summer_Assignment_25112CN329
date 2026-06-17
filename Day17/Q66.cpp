// Program to find union of two arrays

#include <bits/stdc++.h>
using namespace std;

int main() {
    int n1, n2;
    cin >> n1;

    int a[n1];
    for(int i = 0; i < n1; i++) {
        cin >> a[i];
    }

    cin >> n2;

    int b[n2];
    for(int i = 0; i < n2; i++) {
        cin >> b[i];
    }

    for(int i = 0; i < n1; i++) {
        bool duplicate = false;

        for(int j = 0; j < i; j++) {
            if(a[i] == a[j]) {
                duplicate = true;
                break;
            }
        }

        if(!duplicate) {
            cout << a[i] << " ";
        }
    }

    for(int i = 0; i < n2; i++) {
        bool duplicate = false;

        for(int j = 0; j < n1; j++) {
            if(b[i] == a[j]) {
                duplicate = true;
                break;
            }
        }

        if(!duplicate) {
            for(int j = 0; j < i; j++) {
                if(b[i] == b[j]) {
                    duplicate = true;
                    break;
                }
            }
        }

        if(!duplicate) {
            cout << b[i] << " ";
        }
    }

    return 0;
}