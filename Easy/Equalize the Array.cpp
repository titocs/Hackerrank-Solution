// Link problem: https://www.hackerrank.com/challenges/equality-in-a-array/problem?isFullScreen=false

#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, count = 0, big; cin >> n;
    int arr[n+1], temp[102] = {0};
    for(int i=1; i<=n; ++i){
        cin >> arr[i];
        temp[arr[i]]++;
    }   
    int maks = 0;
    for(int i=1; i<=100; ++i){
        if(temp[i] > maks){
            maks = temp[i];
            big = i;
        }  
    }
    for(int i=1; i<=n; ++i){
        if(arr[i] != big)
            count++;
    }
    cout << count;
}
