// Program to count set bits in a number

#include<iostream>
#include<cmath>
#include<vector>
using namespace std;

int power(int num){
    int ans = 0;
    while(num>1){
        ans++;
        num /= 2;
    }
    return ans;
}
int main(){
    int n;
    cin>>n;

    // Convert the number into binary

    vector<int> result;
    int highestPower = power(n);
    for(int i = highestPower; i >= 0; i--){
        if(pow(2, i) <= n){
            result.push_back(1);
            n -= pow(2, i);
        }
        else{
            result.push_back(0);
        }
    }

    // Count set bits
    int count = 0;
    for(int i = 0; i < result.size(); i++){
        if(result[i] == 1){
            count++;
        }
    }
    cout << count;

    return 0;
}