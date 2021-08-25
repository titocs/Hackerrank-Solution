// Link problem: hackerrank.com/challenges/strong-password/problem

#include <bits/stdc++.h>
using namespace std;

int main(){
    int n; cin >> n;
    int num = 0, low = 0, upper = 0, spec = 0;
    string s; cin >> s;
    for(int i=0; i<s.length(); ++i){
        if(s[i] >= '0' && s[i] <= '9')
            num = 1;
        else if(s[i] >= 'a' && s[i] <= 'z')
            low = 1;
        else if(s[i] >= 'A' && s[i] <= 'Z')
            upper = 1;
        else
            spec = 1;
    }
    if(n + (4 - (num + low + upper + spec)) < 6){
        cout << 6 - n;
    }
    else{
        cout << 4 - (num + low + upper + spec);
    }
}
