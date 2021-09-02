// Link problem: https://www.hackerrank.com/challenges/two-strings/problem

#include <bits/stdc++.h>
using namespace std;

int main(){
    int n; cin >> n;
    while(n--){
        string a, b;
        int aa[26] = {0}, bb[26] = {0};
        cin >> a >> b;
        bool flag = false;
        for(int i=0; i<a.length(); ++i){
            aa[a[i] - 'a']++;
        }
        for(int i=0; i<b.length(); ++i){
            bb[b[i] -'a']++;
        }
        for(int i=0; i<26; ++i){
            if(aa[i] > 0 && bb[i] > 0){
                flag = true;
                break;
            }
        }
        cout << (flag ? "YES" : "NO") << '\n';
    }
}
