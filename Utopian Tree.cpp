// link problem: hackerrank.com/challenges/utopian-tree/problem

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
int main(){
    ll n; cin >> n;
    while(n--){
        ll x, init = 1;
        cin >> x;
        if(x == 0){
            cout << "1" << endl;
            continue;
        }
        else{
            for(int i=0; i<x; ++i){
                if(i % 2 == 0)
                    init *= 2;
                else if(i % 2 != 0)
                    init += 1;
            }
        }
        cout << init << endl;
        init = 1;
    }
}
