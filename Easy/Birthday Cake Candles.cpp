// link problem: https://www.hackerrank.com/challenges/birthday-cake-candles/problem

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
int main(){
    ll n, count = 0;
    vector<ll> arr;
    cin >> n;
    for(int i=0; i<n; ++i){
        int x; cin >> x;
        arr.push_back(x);
    }
    int temp = *max_element(arr.begin(), arr.end());
    for(int i=0; i<n; ++i){
        if(arr[i] == temp){
            count += 1;
        }
    }
    cout << count;
}
