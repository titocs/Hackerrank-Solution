// Link problem: hackerrank.com/challenges/runningtime/problem

#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, count = 0; cin >> n;
    vector<int> arr(n);
    for(int i=0; i<n; ++i)
        cin >> arr[i];
    
    for(int i=0; i<n; ++i){
        for(int j=0; j<n-i-1; ++j){
            if(arr[j] > arr[j+1]){
                swap(arr[j], arr[j+1]);
                count++;
            }
        }
    }
    cout << count;
}
