// link problem: https://www.hackerrank.com/challenges/a-very-big-sum/problem
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
int main(){
    ll n, count = 0; cin >> n;
    ll arr[n];
    for(ll i=0; i<n; ++i){
        cin >> arr[i];
    }
    for(ll i=0; i<n; ++i){
        count += arr[i];
    }
    cout << count;
}
