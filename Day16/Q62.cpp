// Program to find maximum frequency element

#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    int a[n];
    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }

    int mxFreq = 0, ans;

    for(int i = 0; i < n; i++) {
        int cnt = 0;

        for(int j = 0; j < n; j++) {
            if(a[i] == a[j]) {
                cnt++;
            }
        }

        if(cnt > mxFreq) {
            mxFreq = cnt;
            ans = a[i];
        }
    }

    cout << ans;

    return 0;
}