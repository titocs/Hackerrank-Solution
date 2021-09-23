// link problem: https://www.hackerrank.com/challenges/marcs-cakewalk/problem

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
int main(){
    ll n, count = 0;
    cin >> n;
    vector<ll> arr(n);
    for(ll i=0; i<n; ++i)
        cin >> arr[i];

    sort(arr.begin(), arr.end(), greater<ll>());
    for(ll i=0; i<n; ++i){
        count += arr[i]*pow(2,i);
    }
    cout << count;
}
