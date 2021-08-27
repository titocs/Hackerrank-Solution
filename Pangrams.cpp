// link problem: https://www.hackerrank.com/challenges/pangrams/problem

#include <bits/stdc++.h>
using namespace std;

int c[26];
int main(){
	string s; getline(cin,s);
	for(int i=0; i<s.length(); i++) {
		if(s[i] == ' ')
			continue;
		if('A' <= s[i] && s[i] <= 'Z')
			c[s[i] - 'A']++;
		else
			c[s[i] - 'a']++;
	}
	for(int i=0; i<26; i++) {
		if(c[i] == 0) {
			cout << "not pangram" << endl;
			return 0;
		}
	}
	cout << "pangram" << endl;
	return 0;
}
