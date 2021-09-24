// Link problem: https://www.hackerrank.com/challenges/big-sorting/problem

#include <bits/stdc++.h>
using namespace std;

bool check(string i, string j){
    int n = i.length();
    int m = j.length();
    if(n == m)
        return (i < j);
    
    return n < m;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int n; cin >> n;
    vector<string> arr(n);
    for(int i=0; i<n; ++i){
        cin >> arr[i];
    }
    sort(arr.begin(), arr.end(), check);
    for(int i=0; i<n; ++i){
        cout << arr[i] << '\n';
    }
}
