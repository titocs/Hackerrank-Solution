// Link problem: https://www.hackerrank.com/challenges/closest-numbers/problem?h_r=profile

#include <bits/stdc++.h>
using namespace std;

int main(){
    int n; cin >> n;
    int arr[n];
    for(int i=0; i<n; ++i)
        cin >> arr[i];

    sort(arr, arr+n);
    int diff[n];
    adjacent_difference(arr, arr+n, diff);
    int min = *min_element(diff+1, diff+n);
    for(int i=1; i<n; ++i){
        if(diff[i] == min)
            cout << arr[i-1] << " " << arr[i] << " ";
    }
}
