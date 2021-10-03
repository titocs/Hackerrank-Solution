// link problem: https://www.hackerrank.com/challenges/time-conversion/problem

#include <bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin >> s;
    // kasus AM
    if(s[8] == 'A'){
        if(s[0] == '0' && (s[1] >= '0' && s[1] <= '9')){
            for(int i=0; i<=7; ++i){
                cout << s[i];
            }
        }
        else if(s[0] == '1' && s[1] == '2'){
            cout << "00";
            for(int i=2; i<=7; ++i){
                cout << s[i];
            }
        }
        else if(s[0] == '1' && s[1] == '3'){
            cout << "01";
            for(int i=2; i<=7; ++i){
                cout << s[i];
            }
        }
        else if(s[0] == '1' && s[1] == '4'){
            cout << "02";
            for(int i=2; i<=7; ++i){
                cout << s[i];
            }
        }
        else if(s[0] == '1' && s[1] == '5'){
            cout << "03";
            for(int i=2; i<=7; ++i){
                cout << s[i];
            }
        }
        else if(s[0] == '1' && s[1] == '6'){
            cout << "04";
            for(int i=2; i<=7; ++i){
                cout << s[i];
            }
        }
        else if(s[0] == '1' && s[1] == '7'){
            cout << "05";
            for(int i=2; i<=7; ++i){
                cout << s[i];
            }
        }
        else if(s[0] == '1' && s[1] == '8'){
            cout << "06";
            for(int i=2; i<=7; ++i){
                cout << s[i];
            }
        }
        else if(s[0] == '1' && s[1] == '9'){
            cout << "07";
            for(int i=2; i<=7; ++i){
                cout << s[i];
            }
        }
        else if(s[0] == '2' && s[1] == '0'){
            cout << "08";
            for(int i=2; i<=7; ++i){
                cout << s[i];
            }
        }
        else if(s[0] == '2' && s[1] == '1'){
            cout << "09";
            for(int i=2; i<=7; ++i){
                cout << s[i];
            }
        }
        else if(s[0] == '2' && s[1] == '2'){
            cout << "10";
            for(int i=2; i<=7; ++i){
                cout << s[i];
            }
        }
        else if(s[0] == '2' && s[1] == '3'){
            cout << "11";
            for(int i=2; i<=7; ++i){
                cout << s[i];
            }
        }
        else if(s[0] == '2' && s[1] == '4'){
            cout << "00";
            for(int i=2; i<=7; ++i){
                cout << s[i];
            }
        }
    }

    // kasus PM
    else{
        if(s[0] == '0' && s[1] == '1'){
            cout << "13";
            for(int i=2; i<=7; ++i){
                cout << s[i];
            }
        }
        else if(s[0] == '0' && s[1] == '2'){
            cout << "14";
            for(int i=2; i<=7; ++i){
                cout << s[i];
            }
        }
        else if(s[0] == '0' && s[1] == '3'){
            cout << "15";
            for(int i=2; i<=7; ++i){
                cout << s[i];
            }
        }
        else if(s[0] == '0' &&  s[1] == '4'){
            cout << "16";
            for(int i=2; i<=7; ++i){
                cout << s[i];
            }
        }
        else if(s[0] == '0' && s[1] == '5'){
            cout << "17";
            for(int i=2; i<=7; ++i){
                cout << s[i];
            }
        }
        else if(s[0] == '0' && s[1] == '6'){
            cout << "18";
            for(int i=2; i<=7; ++i){
                cout << s[i];
            }
        }
        else if(s[0] == '0' && s[1] == '7'){
            cout << "19";
            for(int i=2; i<=7; ++i){
                cout << s[i];
            }
        }
        else if(s[0] == '0' && s[1] == '8'){
            cout << "20";
            for(int i=2; i<=7; ++i){
                cout << s[i];
            }
        }
        else if(s[0] == '0' && s[1] == '9'){
            cout << "21";
            for(int i=2; i<=7; ++i){
                cout << s[i];
            }
        }
        else if(s[0] == '1' && s[1] == '0'){
            cout << "22";
            for(int i=2; i<=7; ++i){
                cout << s[i];
            }
        }
        else if(s[0] == '1' && s[1] == '1'){
            cout << "23";
            for(int i=2; i<=7; ++i){
                cout << s[i];
            }
        }
        else if(s[0] == '1' && s[1] == '2'){
            cout << "12";
            for(int i=2; i<=7; ++i){
                cout << s[i];
            }
        }
    }
}
