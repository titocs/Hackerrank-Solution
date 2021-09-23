// Link problem: https://www.hackerrank.com/challenges/string-construction/problem

#include <bits/stdc++.h>
using namespace std;

int main(){
    int n; cin >> n;
    while(n--){
        string s; cin >> s;
        unordered_map<char, int> m; 
        for(int i=0; i<s.length(); ++i){
            m[s[i]]++; 
        }
        cout << m.size() << endl;
    }
}
