// Program to find missing number in array

#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    int a[n];
    for(int i = 0; i < n - 1; i++) {
        cin >> a[i];
    }

    int sum = 0;
    for(int i = 0; i < n - 1; i++) {
        sum += a[i];
    }

    int total = n * (n + 1) / 2;

    cout << total - sum;

    return 0;
}