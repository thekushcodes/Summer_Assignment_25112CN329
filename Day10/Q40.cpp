// Program to print given pattern:
//     A
//    ABA
//   ABCBA
//  ABCDCBA
// ABCDEDCBA

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
            cout<<char('A'+j-1);
        }
        for(int j = i+2; j > 2; j--){
            cout<<char('A'+j-3);
        }
        cout<<endl;
    }
    return 0;
}