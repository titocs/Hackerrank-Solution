// Link problem: https://www.hackerrank.com/challenges/angry-professor/problem

#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, k, T;
    cin >> T;
    while(T--){
        cin >> n >> k;
        int count = 0;
        vector<int> arr(n);
        for(int i=0; i<n; ++i)
            cin >> arr[i];
        for(int i=0; i<n; ++i){
            if(arr[i] <= 0)
                count++;
        }
        cout << (count < k ? "YES" : "NO") << endl;
        count = 0;
        arr.clear();
    }
}
