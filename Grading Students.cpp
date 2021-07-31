// link problem: https://www.hackerrank.com/challenges/grading/problem

#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, temp = 0; cin >> n;
    while(n--){
        int x; cin >> x;
        if(x % 5 == 1){
            temp = temp + (x + 4);
            if(x < 38)
                cout << x << endl;
            else if(abs(x - temp) < 3)
                cout << temp << endl;
            else if(abs(x - temp) == 3)
                cout << x << endl;
            else
                cout << x << endl;
            temp = 0;
        }
        else if(x % 5 == 2){
            temp = temp + (x + 3);
            if(x < 38)
                cout << x << endl;
            else if(abs(x - temp) < 3)
                cout << temp << endl;
            else if(abs(x - temp) == 3)
                cout << x << endl;
            else
                cout << x << endl;
            temp = 0;
        }
        else if(x % 5 == 3){
            temp = temp + (x + 2);
            if(x < 38)
                cout << x << endl;
            else if(abs(x - temp) < 3)
                cout << temp << endl;
            else if(abs(x - temp) == 3)
                cout << x << endl;
            else
                cout << x << endl;
            temp = 0;
        }
        else if(x % 5 == 4){
            temp = temp + (x + 1);
            if(x < 38)
                cout << x << endl;
            else if(abs(x - temp) < 3)
                cout << temp << endl;
            else if(abs(x - temp) == 3)
                cout << x << endl;
            else
                cout << x << endl;
            temp = 0;
        }
        else if(x % 5 == 0){
            cout << x << endl;
        }
    }
}
