// Link problem: https://www.hackerrank.com/challenges/the-love-letter-mystery/problem?isFullScreen=true

#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int tt; cin >> tt;
    while(tt--){
        int count = 0;
        string s; cin >> s;
        if(s.length() % 2 == 0){
            int temp = s.length()/2 - 1;
            for(int i=s.length()/2; i<s.length(); ++i){
                count += abs(s[temp] - s[i]);
                temp--;
            }
        }
        else{
            int temp = s.length()/2 - 1;
            for(int i=(s.length()/2)+1; i<s.length(); ++i){
                count += abs(s[temp] - s[i]);
                temp--;
            }
        }
        cout << count << endl;
    }
    /*
        2
        0
        4
        2
    */
}
