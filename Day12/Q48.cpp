// Program to write function for perfect number

#include<iostream>
using namespace std;

bool perfect(int n){
    int sum = 1;
    for(int i = 2; i*i <= n; i++){
        if(n%i == 0){
            sum += i;
            if(n/i != i){
                sum += n/i;
            }
        }
    }
    if(sum == n) return true;
    return false;
}
int main(){
    int n;
    cin>>n;

    if(perfect(n)) cout<<"It is a perfect number";
    else cout<<"It is not a perfect number";

    return 0;
}