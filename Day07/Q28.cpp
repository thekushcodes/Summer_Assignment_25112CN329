// Program to reverse number recursively

#include<iostream>
#include<cmath>
using namespace std;

int reverseNum(int n){
    int lastDigit = n%10;
    int remNumbers = 0;
    int num = n/10;
    while(num>0){
        num /= 10;
        remNumbers++;
    }

    if(n <= 0){
        return 0;
    }
    return lastDigit * pow(10, remNumbers) + reverseNum(n/10);
}

int main(){
    int n;
    cin>>n;

    cout<<reverseNum(n);
    return 0;
}