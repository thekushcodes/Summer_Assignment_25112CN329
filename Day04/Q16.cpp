// Program to print Armstrong numbers in a range

#include<bits/stdc++.h>
using namespace std;

int main(){
    int range;
    cin>>range;
    
    for(int i = 1; i <= range; i++){
        int digits = 0;
        int num = i;
        int result = 0;
        while(num > 0){
            digits++;
            num /= 10;
        }
        num = i;
        while(num > 0){
            int lastDigit = num % 10;
            result = result + pow(lastDigit, digits);
            num /= 10;
        }
        if(result == i){
            cout<<i<<" ";
        }
    }
    return 0;
}