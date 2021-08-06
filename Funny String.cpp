// Link problem: https://www.hackerrank.com/challenges/funny-string/problem

#include <bits/stdc++.h>
using namespace std;

void reverseStr(string& str){
    int n = str.length();
    for (int i = 0; i < n / 2; i++)
        swap(str[i], str[n - i - 1]);
}

int main(){
    int T; cin >> T;
    while(T--){
        string s; cin >> s;
        vector<int> tampung1, tampung2;
        string temp = s;
        reverseStr(temp);
        for(int i=0; i<s.length()-1; ++i){
                tampung1.push_back(abs(int(s[i]) - int(s[i+1])));
                tampung2.push_back(abs(int(temp[i]) - int(temp[i+1])));
        }
        if(tampung1 == tampung2)
            cout << "Funny" << endl;
        else
            cout << "Not Funny" << endl;
        tampung1.clear(); tampung2.clear();
    }
}
