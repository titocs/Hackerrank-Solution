// Link problem: https://www.hackerrank.com/challenges/beautiful-binary-string/problem

#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, count = 0; cin >> n;
    string s; cin >> s;
    for(int i=0; i<n; ++i){
        if(s[i] == '0' && s[i+1] == '1' && s[i+2] == '0'){
            count++;
            i += 2;
        }
    }
    cout << count;
}
