// Link problem: https://www.hackerrank.com/challenges/icecream-parlor/problem?h_r=internal-search

#include <bits/stdc++.h>
using namespace std;

int main(){
    int t, n;
    cin >> t;
    while(t--){
        int k; cin >> k >> n;
        vector<int> arr(n);
        for(int i=0; i<n; ++i){
            cin >> arr[i];
        }
        bool flag = false;
        for(int i=0; i<n; ++i){
            for(int j=0; j<n; ++j){
                if(i == j)
                    continue;
                if(arr[i] + arr[j] == k && !flag){
                    cout << i + 1 << " " << j + 1 << endl;
                    flag = true;
                    continue;
                }
            }
        }
    }

}
