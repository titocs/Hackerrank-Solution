// Link problem: https://www.hackerrank.com/challenges/the-hurdle-race/problem

#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, k; cin >> n >> k;
    vector<int> arr(n);
    for(int i=0; i<n; ++i)  
        cin >> arr[i];
    int temp = arr[0];
    for(int i=0; i<n; ++i){
        if(arr[i] > temp)
            temp = arr[i];
    }
    if(k < temp)
        cout << abs(k - temp);
    else
        cout << "0";
}
