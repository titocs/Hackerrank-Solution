// Link problem: https://www.hackerrank.com/challenges/hackerrank-in-a-string/problem

#include <bits/stdc++.h>
using namespace std;

int main(){
    int n; cin >> n;
    string temp = "hackerrank";
    while(n--){
        string s; cin >> s;
        int count = 0;
        int j = 0;
        for(int i=0; i<s.length(); ++i){
            if(s[i] == temp[j]){
                j++;
                count++;
            }
        }
        cout << (count >= 10 ? "YES" : "NO") << endl;  
    }
}
