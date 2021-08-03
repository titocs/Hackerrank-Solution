// Link problem: https://www.hackerrank.com/challenges/minimum-distances/problem

#include <bits/stdc++.h>
using namespace std;

int main(){
    int n; cin >> n;
    int count = 0;
    vector<int> result;
    vector<int> arr(n);
    for(int i=0; i<n; ++i){
        cin >> arr[i];
    }
    for(int i=0; i<n; ++i){
        for(int j=i+1; j<n; ++j){
            if(arr[i] == arr[j]){
                result.push_back(abs(i-j));
                count++;
            }
        }
    }
    if(count == 0)
        cout << "-1";
    else
        cout << *min_element(result.begin(), result.end());
