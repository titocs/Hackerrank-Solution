// Link problem: https://www.hackerrank.com/challenges/caesar-cipher-1/problem

#include <bits/stdc++.h>
using namespace std;

int main(){
    int n; cin >> n;
    string s; cin >> s;
    int k; cin >> k;
    int len = s.length();
    for (int i=0; i<len; i++){
        if(!(s[i] >= 65 && s[i] <= 90) && !(s[i] >= 97 && s[i] <= 122))
            continue;
        else{
            if(s[i] >= 97 && s[i] <= 122){
                int alphabet = s[i] - 'a';
                alphabet = (alphabet + k) % 26;
                s[i] = 'a' + alphabet;
            }
            else if(s[i] >= 65 && s[i] <= 90){
                int alphabet = s[i] - 'A';
                alphabet = (alphabet + k) % 26;
                s[i] = 'A' + alphabet;
            }
        }
    }
    cout << s << endl;
}
