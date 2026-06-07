// Program to print reverse pyramid
// *********
//  *******
//   *****
//    ***
//     *

#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;

    for(int i = 0; i < n; i++){
        for(int j = 0; j < i; j++){
            cout<<" ";
        }
        for(int j = n-i; j > 0; j--){
            cout<<"*";
        }
        for(int j = n-i; j > 1; j--){
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}