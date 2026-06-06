// Program to convert decimal to binary

#include<iostream>
#include<cmath>
#include<vector>
using namespace std;

int power(int n){
    int ans = 0;
    while(n>1){
        n /= 2;
        ans++;
    }
    return ans;
}

int main(){
    int n;
    cin>>n;

    vector<int> ans;

    int highestPower = power(n);
    for(int i = highestPower; i >= 0; i--){
            if(n>=pow(2,i)){
                ans.push_back(1);
                n -= pow(2, i);
            }
            else{
                ans.push_back(0);
            }
    }

    for(int i = 0; i < ans.size(); i++){
        cout<<ans[i];
    }
    return 0;
    
}