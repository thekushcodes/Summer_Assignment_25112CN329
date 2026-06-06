// Program to check a Perfect number

#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;

    int ans = 1;
    for(int i = 2; i*i <= n; i++){
        if(n%i == 0){
            ans += i;
            if(n/i != i){
                ans += n/i;
            }
        }
    }

    if(ans == n){
        cout<<"It is a Perfect number";
    }
    else{
        cout<<"It is not a Perfect number";
    }
    return 0;
}