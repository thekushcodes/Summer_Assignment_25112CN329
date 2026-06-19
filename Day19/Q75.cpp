// Program to find transpose of a matrix

#include <iostream>
using namespace std;

int main() {
    int r, c;
    cin >> r >> c;

    int a[r][c], transpose[c][r];

    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            cin >> a[i][j];
        }
    }

    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            transpose[j][i] = a[i][j];
        }
    }

    for (int i = 0; i < c; i++) {
        for (int j = 0; j < r; j++) {
            cout << transpose[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}