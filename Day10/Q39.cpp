// Program to print given pattern:
//     1
//    121
//   12321
//  1234321
// 123454321

#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;

    for(int i = 0; i < n; i++){
        for(int j = 0; j < n-1-i; j++){
            cout<<" ";
        }
        for(int j = 1; j < i+2; j++){
            cout<<j;
        }
        for(int j = i+2; j > 2; j--){
            cout<<j-2;
        }
        cout<<endl;
    }
    return 0;
}