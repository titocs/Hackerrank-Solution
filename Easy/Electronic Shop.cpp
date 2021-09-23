// Link problem: https://www.hackerrank.com/challenges/electronics-shop/problem

#include <bits/stdc++.h>
using namespace std;

int main(){
    int b, n, m;
    cin >> b >> n >> m;
    vector<int> arr(n), brr(m);
    for(int i=0; i<n; ++i){
        cin >> arr[i];
    }
    for(int i=0; i<m; ++i){
        cin >> brr[i];
    }
    int maks = 0;
    for(int i=0; i<n; ++i){
        for(int j=0; j<m; ++j){
            if(arr[i] + brr[j] > maks && arr[i] + brr[j] <= b)
                maks = arr[i] + brr[j];
        }
    }
    cout << (maks == 0 ? -1 : maks);
}
