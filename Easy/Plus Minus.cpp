// link problem: https://www.hackerrank.com/challenges/plus-minus/problem

#include <bits/stdc++.h>
using namespace std;

int main(){
   int size,inp; 
   cin >> size;
   int pos = 0, neg = 0, zer = 0;
   for(int i=0; i<size; i++){
        cin >> inp;
        if(inp > 0) pos++;
        else if(inp < 0) neg++;
        else zer++;
   }
   printf("%6f\n", (float)pos / size);
   printf("%6f\n%6f\n", (float)neg / size ,(float)zer / size);
}
