#include <bits/stdc++.h>
using namespace std;

int reverse_angka(int x){
    int temp = x;
    int ret = 0;

    while(temp > 0){
        ret = (ret * 10) + (temp % 10);
        temp = temp/10;
    }
    return ret;
}

int main(){
    int i, j, k; cin >> i >> j >> k;
    int count = 0;
    for(int ii=i; ii<=j; ++ii){
        if(abs(ii - reverse_angka(ii))%k == 0)
            count++;
    }
    cout << count;
}
