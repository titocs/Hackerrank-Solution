// Link problem: https://www.hackerrank.com/challenges/array-left-rotation/problem

#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, rotate;
    vector<int> arr(n), temp;
    cin >> n >> rotate;
    for(int i=0; i<n; ++i){
        cin >> arr[i];
    }
    for(int i=rotate; i<n; ++i){
        cout << arr[i] << " ";
    }
    for(int i=0; i<rotate; ++i){
        cout << arr[i] << " ";
    }
}
