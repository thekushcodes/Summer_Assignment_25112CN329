// Program to find product of digits

#include<iostream>
using namespace std;

int main(){
    int n, product = 1;
    cin>>n;

    while(n>0){
        int lastDigit = n%10;
        product *= lastDigit;
        n /= 10;
    }
    cout<<"Product of the digits = "<<product;

    return 0;
}