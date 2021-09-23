// Link problem: https://www.hackerrank.com/challenges/apple-and-orange/problem

#include <bits/stdc++.h>
using namespace std;

int main(){
    int s, t, a, b, m, n;
    int count_apple = 0, count_orange = 0;
    cin >> s >> t >> a >> b >> m >> n;
    vector<int> apple(m), orange(n);
    for(int i=0; i<m; ++i)
        cin >> apple[i];
    for(int i=0; i<n; ++i)
        cin >> orange[i];
  
    for(int i=0; i<m; ++i)
        apple[i] += a;
    for(int i=0; i<n; ++i)
        orange[i] += b;
  
    for(int i=0; i<m; ++i){
        if(apple[i] >= s && apple[i] <= t)
            count_apple++;
    }
    for(int i=0; i<n; ++i){
        if(orange[i] >= s && orange[i] <= t)
            count_orange++;
    }
    cout << count_apple << '\n' << count_orange;
}
