#include <iostream>
#include <string>

using namespace std;

int main(){
    int n;
    cin >> n;
    for(int iter = 0; iter < n; ++iter){
        string s;
        cin >> s;
        int counts[26];
        for(int i = 0; i < 26; ++i){
            counts[i] = 0;
        }
        for(int i = 0; i < s.length(); ++i){
            ++counts[s[i] - 'a'];
        }
        int twos = 0;
        int ones = 0;
        for(int i = 0; i < 26; ++i){
            if(counts[i] >= 2) twos++;
            if(counts[i] == 1) ones++;
        }
        cout << twos + ones / 2 << "\n";
    }
    return 0;
}