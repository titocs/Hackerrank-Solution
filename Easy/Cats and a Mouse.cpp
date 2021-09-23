// link problem: https://www.hackerrank.com/challenges/cats-and-a-mouse/problem

#include <bits/stdc++.h>
using namespace std;

int main(){
    int x, y, z, n;
    cin >> n;
    while(n--){
        cin >> x >> y >> z;
        if(abs(z-x) > abs(z-y))
            cout << "Cat B" << endl;
        else if(abs(z-x) < abs(z-y))
            cout << "Cat A" << endl;
        else
            cout << "Mouse C" << endl;
    } 
}
