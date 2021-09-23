// Link problem: https://www.hackerrank.com/challenges/permutation-equation/problem

#include <bits/stdc++.h>
using namespace std;

int main(){
    int n; cin >> n;
    vector<int> arr(n+1);
    for(int i=1; i<=n; ++i){
        cin >> arr[i];
    }
    for(int x=1; x<=n; ++x){
        for(int j=1; j<=n; ++j){
            for(int k=1; k<=n; ++k){
                if(x == arr[k]){
                    if(k == arr[j])
                        cout << j << '\n';
                }
            }
        }
    }
}
