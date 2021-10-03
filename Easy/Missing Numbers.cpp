// Link problem: https://www.hackerrank.com/challenges/missing-numbers/problem

#include <bits/stdc++.h>
using namespace std;

int main(){
    int n1, n2;
    cin >> n1;
    int arr[10001];
    memset(arr, 0, sizeof(arr));
    for(int i=0; i<n1; ++i){
        int x; cin >> x;
        arr[x]--;
    }
    
    cin >> n2;
    for(int i=0; i<n2; ++i){
        int x; cin >> x;
        arr[x]++;
    }

    for(int i=0; i<10001; ++i){
        if(arr[i] >0)
            cout << i << " ";
    }
}
