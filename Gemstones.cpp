// Link problem: https://www.hackerrank.com/challenges/gem-stones/problem

#include <bits/stdc++.h>
using namespace std;

int main(){
    int n; cin >> n;
    char letter[26] = {0};
    int count = 0;
    for(int i=0; i<n; ++i){
        string s; cin >> s;
        for(int j=0; j<s.length(); ++j){
            if(letter[s[j] - 'a'] == i){
                letter[s[j] - 'a']++;
                if(letter[s[j] - 'a'] == n){
                    count++;
                }                    
            }
        }
    }
    cout << count;
}
