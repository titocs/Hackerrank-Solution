// Link problem: https://www.hackerrank.com/challenges/sock-merchant/problem

#include <bits/stdc++.h>
using namespace std;

int main(){
    int n; cin >> n;
    vector<int> arr(n);
    for(int i=0; i<n; ++i)
        cin >> arr[i];
    sort(arr.begin(), arr.end());
    int count = 0;
    for(int i=0; i<n; ++i){
        if(arr[i] == arr[i+1]){
            i++; count++;
        }
    }
    cout << count;
}
