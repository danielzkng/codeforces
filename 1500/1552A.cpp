#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    int n;
    cin >> n;
    for(int iter = 0; iter < n; ++iter){
        int len;
        cin >> len;
        string s;
        cin >> s;
        vector<char> str;
        for(int i = 0; i < len; ++i){
            str.push_back(s[i]);
        }
        sort(str.begin(), str.end());
        int out = 0;
        for(int i = 0; i < len; ++i){
            if(str[i] != s[i]) ++out;
        }
        cout << out << "\n";
    }
    return 0;
}