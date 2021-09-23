// Link problem: https://www.hackerrank.com/challenges/alternating-characters/problem

#include <bits/stdc++.h>
using namespace std;

int main(){
    int n; cin >> n;
    while(n--){
        int count = 0;
        string s; cin >> s;
        string sama;
        reverse(sama.begin(), sama.end());
        if(s == sama)
            cout << s.length() - 1 << endl;
        else{
            for(int i=0; i<s.length(); ++i){
                if(s[i] == s[i+1]){
                    count++;
                }
            }
            cout << count << endl;
        }
    }
}
