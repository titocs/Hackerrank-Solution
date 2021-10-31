// Link problem: https://www.hackerrank.com/challenges/repeated-string/problem?isFullScreen=true

#include <bits/stdc++.h>
using namespace std;

int main(){
    long long n, huruf = 0; 
    string s; cin >> s;
    cin >> n;
    long long count = 0;
    for(int i=0; i<s.length(); ++i){
        if(s[i] == 'a')
            huruf++;
    }
    if(huruf == 0){
        cout << "0";
        return 0;
    }
    long long loops = n/s.length();
    long long remain = n - (s.length() * (n/s.length()));
    for(int i=0; i<remain; ++i){
        if(s[i] == 'a')
            count++;
    }
    loops = (loops * huruf) + count;
    cout << loops;
}
