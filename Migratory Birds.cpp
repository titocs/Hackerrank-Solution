// Link problem: https://www.hackerrank.com/challenges/migratory-birds/problem

#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, max; cin >> n;
    vector<int> arr(6);
    for(int i=0; i<n; ++i){
        int x; cin >> x;
        arr[x]++;
    }
    int res = *max_element(arr.begin(), arr.end());
    for(int i=1; i<=5; ++i){
        if(arr[i] == res){
            cout << i;
            break;
        }
    }
}
