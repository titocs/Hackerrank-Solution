// Link problem: https://www.hackerrank.com/challenges/find-digits/problem

#include <bits/stdc++.h>
using namespace std;

int main(){
    int t; cin >> t;
    while(t--){
        int n, count = 0; cin >> n;
        int temp = n;
        while(temp > 0){
            if(temp % 10 != 0 && n % (temp % 10) == 0)
                count++;
            temp /= 10;
        }
        cout << count << '\n';
    }
}
