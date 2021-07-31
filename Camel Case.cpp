// link problem: https://www.hackerrank.com/challenges/camelcase/problem

#include <bits/stdc++.h>
using namespace std;

int main(){
    string s;
    int count = 0;
    cin >> s;
    for(int i=0; i<s.length(); ++i){
        if(s[i] >= 'A' && s[i] <= 'Z')
            count++;
    }
    cout << count + 1 << endl;
}
