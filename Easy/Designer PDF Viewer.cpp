// Link problem: https://www.hackerrank.com/challenges/designer-pdf-viewer/problem

#include <bits/stdc++.h>
using namespace std;

int main(){
    vector<int> arr(27), temp;
    for(int i=1; i<=26; ++i)
        cin >> arr[i];

    string s; cin >> s;
    sort(s.begin(), s.end());
    for(int i=1; i<=s.length(); ++i){
        int karakter = (s[i] - 'a') + 1;
        temp.push_back(arr[karakter]);
    }
    int tall = *max_element(temp.begin(), temp.end());
    cout << tall*s.length();
}
