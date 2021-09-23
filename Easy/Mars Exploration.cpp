// Link problem : https://www.hackerrank.com/challenges/mars-exploration/problem

#include <bits/stdc++.h>
using namespace std;

int main(){
    string s;
    int count = 0;
    cin >> s;
    string temp = "SOS";
    for(int i=0; i<s.length(); i +=3){
        int x = 0;
        for(int j=i; j<3 + i; ++j){
            if(s[j] != temp[x])
                count += 1;
            x++;
        }
        x = 0;
    }
    cout << count;
}
