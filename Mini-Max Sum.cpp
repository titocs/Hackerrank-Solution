// link problem: https://www.hackerrank.com/challenges/mini-max-sum/problem

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
int main(){
    ll arr[5], temp1 = 0, temp2 = 0, temp3 = 0, temp4 = 0, temp5 = 0;
    vector<ll> res;
    for(ll i=0; i<5; ++i)
        cin >> arr[i];

    for(ll i=1; i<5; ++i)
        temp1 = temp1 + arr[i];
    res.push_back(temp1);

    for(ll i=0; i<5; ++i){
        if(i == 1)
            continue;
        temp2 = temp2 + arr[i];
    }
    res.push_back(temp2);

    for(ll i=0; i<5; ++i){
        if(i == 2)
            continue;
        temp3 = temp3 + arr[i];
    }
    res.push_back(temp3);

    for(ll i=0; i<5; ++i){
        if(i == 3)
            continue;
        temp4 = temp4 + arr[i];
    }
    res.push_back(temp4);

    for(ll i=0; i<5; ++i){
        if(i == 4)
            continue;
        temp5 = temp5 + arr[i];
    }
    res.push_back(temp5);

    cout << *min_element(res.begin(), res.end()) << " " << *max_element(res.begin(), res.end());
}
