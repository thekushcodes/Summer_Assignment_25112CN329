// Program to write function for Armstrong number

#include<iostream>
#include<cmath>
using namespace std;

bool armstrong(int n){
    int num = n;
    int result = 0;

    int digits = 0;
    while(n > 0){
        digits++;
        n /= 10;
    }
    n = num;
    while(n > 0){
        int lastDigit = n % 10;
        result = result + pow(lastDigit, digits);
        n /= 10;
    }
    if(num == result) return true;
    return false;
}

int main(){
    int n;
    cin>>n;

    if(armstrong(n)) cout<<"It is an Armstrong number";
    else cout<<"It is not an Armstrong number";
    return 0;

}