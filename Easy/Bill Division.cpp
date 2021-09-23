// Link problem: 

#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, k, count = 0; cin >> n >> k;
    vector<int> arr(n);
    for(int i=0; i<n; ++i){
        cin >> arr[i];
        if(i == k) continue;
        else count += arr[i];
    }
    int charge; cin >> charge;
    cout << (count/2 == charge ? "Bon Appetit" : charge - count/2);
}
