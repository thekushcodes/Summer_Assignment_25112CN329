// Program to find recursive sum of digits

#include<iostream>
using namespace std;

int sumDigits(int n){
    int lastDigit = n % 10;
    if(n <= 0){
        return 0;
    }
    return lastDigit + sumDigits(n/10);
}

int main(){
    int n;
    cin>>n;

    cout<<sumDigits(n);
    return 0;
}