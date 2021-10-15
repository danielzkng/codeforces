#include <iostream>
#include <string>

using namespace std;

int checkString(string s, int len){
    int out = 0;
    for(int i = 0; i < (len - 1) / 2; i++){
        if(s[i] == s[len - i - 1]) out++;
        else return out;
    }
    return out;
}

int main(){
    int cases;
    cin >> cases;
    for(int i = 0; i < cases; i++){
        int len, k;
        cin >> len >> k;
        string in;
        cin >> in;
        if(checkString(in, len) >= k) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    return 0;
}