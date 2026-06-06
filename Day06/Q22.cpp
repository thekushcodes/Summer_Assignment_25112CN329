// Program to convert binary to decimal

#include<iostream>
#include<cmath>
using namespace std;

int main(){
    int n;
    cin>>n;

    int result = 0;
    int count = 0;
    while(n > 0){
        int lastDigit = n%10;
        if(lastDigit == 1){
            result = result + pow(2, count);
        }
        n /= 10;
        count++;
    }
    cout<<result;
    return 0;
}