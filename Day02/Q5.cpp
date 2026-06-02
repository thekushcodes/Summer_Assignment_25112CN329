// Program to find sum of digits of a number

#include<iostream>
using namespace std;

int main(){
    int n, num, sum = 0;
    cin>>n;
    num = n;
    while(n>0){
        int digit = n%10;
        sum += digit;
        n /= 10;
    }
    cout<<"Sum = "<<sum;
    
    return 0;
}