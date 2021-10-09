// Link problem: https://www.hackerrank.com/challenges/determining-dna-health/problem

#include <bits/stdc++.h>
using namespace std;

class trie{
    public:
        vector<pair<int, int>> m;
        unordered_map<char, trie*> d;   
        void display(std::string s){
            for(auto& it : m)
                cout << s << ": " << it.first << " " << it.second << endl;
            for(auto& it : d)
                it.second -> display(s + it.first);
        }
    
        long long get_score(const std::string& s, int i, int min, int max){
            long long r = 0;
            for(auto& it : m)
                if(it.first >= min && it.first <= max)
                    r + =it.second;
            if(i < s.size() && d.find(s[i]) != d.end())
                r += d[s[i]] -> get_score(s, i+1, min, max);
            return r;
        }
};

int main(){
    int n; cin >> n;
    vector<string> g(n);
    for(int i=0; i<n; ++i)
        cin >> g[i];
    vector<int> h(n);
    for(int i=0; i<n; ++i)
        cin >> h[i];
     
    // bikin tree
    trie t;
    for(int i=0; i<n; ++i) {
        string s = g[i];
        
        trie* ct = &t;
        for(int j=0; j<s.size(); ++j) {
            if(ct->d.find(s[j]) == ct->d.end())
                ct->d[s[j]] = new trie();
            ct = ct->d[s[j]];
        }
        ct->m.push_back(make_pair(i, h[i]));
    }
    long long min = -1, max = -1;
    int k; cin >> k;
    for(int i=0; i<k; ++i) {
        int a, b; string dna;
        cin >> a >> b >> dna;
        
        long long health = 0;
        for(int i=0; i<dna.size(); ++i)
            health += t.get_score(dna,i,a,b);  
        
        if(health < min || min == -1)
            min = health;
        if(health > max || max == -1)
            max = health;
    }
    cout << min << " " << max << endl;
}
