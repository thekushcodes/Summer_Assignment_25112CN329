// Program to print hollow square pattern.
// *****
// *   *
// *   *
// *   *
// *****

#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;

    // First row
    for(int i = 0; i < n; i++){
        cout<<"* ";
    }
    cout<<endl;

    // Middle rows
    for(int i = 0; i < n-2; i++){
        for(int j = 0; j < n; j++){
            if(j == 0 || j == n-1) cout<< "* ";
            else cout<<"  ";

        }
        cout<<endl;
    }

    // Last row
    for(int i = 0; i < n; i++){
        cout<<"* ";
    }
    cout<<endl;
}