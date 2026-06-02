// Program to reverse a number

#include<iostream>
using namespace std;

int main(){
    int n, reverse = 0;
    cin>>n;
    
    while(n > 0){
        int lastDigit = n%10;
        reverse = reverse*10 + lastDigit;
        n /= 10;
    }

    cout<<"Reverse number = "<<reverse;

    return 0;
}