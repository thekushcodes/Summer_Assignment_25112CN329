// Program to fing LCM of two numbers
// Better solution: LCM = (a*b)/GCD

#include<iostream>
using namespace std;

int main(){
    int a, b;
    cin>>a>>b;

    int maxNum = (a>b) ? a : b;

    while(1){
        if(maxNum%a == 0 && maxNum%b == 0){
            cout<<"LCM = "<<maxNum;
            break;
        }
        maxNum++;
    }
    return 0;
}