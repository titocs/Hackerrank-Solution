// link problem: https://www.hackerrank.com/challenges/pangrams/problem

#include <bits/stdc++.h>
using namespace std;

int main(){
    string kata;
    int a = 0, b = 0, c = 0, d = 0, e = 0, f = 0, g = 0, h = 0,
    i = 0, j = 0, k = 0, l = 0, m = 0, n = 0, o = 0, p = 0, q = 0,
    r = 0, s = 0, t = 0, u = 0, v = 0, w = 0, x = 0, y = 0, z = 0;
    getline(cin, kata);
    for_each(kata.begin(), kata.end(), [](char & c) {
        c = ::tolower(c);
    });
    for(int ii=0; ii<kata.length(); ++ii){
        if(kata[ii] == 'a')
            a += 1;
        else if(kata[ii] == 'b')
            b += 1;
        else if(kata[ii] == 'c')
            c += 1;
        else if(kata[ii] == 'd')
            d += 1;
        else if(kata[ii] == 'e')
            e += 1;
        else if(kata[ii] == 'f')
            f += 1;
        else if(kata[ii] == 'g')
            g += 1;
        else if(kata[ii] == 'h')
            h += 1;
        else if(kata[ii] == 'i')
            i += 1;
        else if(kata[ii] == 'j')
            j += 1;
        else if(kata[ii] == 'k')
            k += 1;
        else if(kata[ii] == 'l')
            l += 1;
        else if(kata[ii] == 'm')
            m += 1;
        else if(kata[ii] == 'n')
            n += 1;
        else if(kata[ii] == 'o')
            o += 1;
        else if(kata[ii] == 'p')
            p += 1;
        else if(kata[ii] == 'q')
            q += 1;
        else if(kata[ii] == 'r')
            r += 1;
        else if(kata[ii] == 's')
            s += 1;
        else if(kata[ii] == 't')
            t += 1;
        else if(kata[ii] == 'u')
            u += 1;
        else if(kata[ii] == 'v')
            v += 1;
        else if(kata[ii] == 'w')
            w += 1;
        else if(kata[ii] == 'x')
            x += 1;
        else if(kata[ii] == 'y')
            y += 1;
        else if(kata[ii] == 'z')
            z += 1;
    }
    if(a >= 1 && b >= 1 && c >= 1 && d >= 1 && e >= 1 && f >= 1 && g >=1 &&
       h >=1 && i >= 1 && j >=1 && k >=1 && l >= 1 && m >= 1 && n >= 1
       && o >= 1 && p >=1 && q >= 1 && r >=1 && s >=1 && t >= 1 && u >= 1
       && v >= 1 && w >=1 && x >=1 && y >=1 && z >= 1 )
        cout << "pangram";
    else
        cout << "not pangram";
}
