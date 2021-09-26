// Link problem: https://www.hackerrank.com/challenges/staircase/problem

#include <bits/stdc++.h>
using namespace std;

int main(){
    int n; cin >> n;
    int star = 1, space = n -1;
    while( n > 0){
        for(int i=0; i<space; ++i)
            cout << " ";
        for(int i=0; i<star; ++i)
            cout << "#";
        
        star++; space--;
        --n;
        cout << "" << endl;
    }
}
