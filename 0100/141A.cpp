#include <iostream>
#include <string>

using namespace std;

int main(){
    string a, b, c;
    cin >> a >> b >> c;
    int counts[26], counts2[26];
    for(int i = 0; i < 26; ++i) {
        counts[i] = 0;
        counts2[i] = 0;
    }
    for(int i = 0; i < a.length(); ++i) counts[a[i] - 'A']++;
    for(int j = 0; j < b.length(); ++j) counts[b[j] - 'A']++;
    for(int k = 0; k < c.length(); ++k) counts2[c[k] - 'A']++;
    bool valid = true;
    for(int i = 0; i < 26; ++i){
        valid = valid & (counts[i] == counts2[i]);
    }
    if(valid) cout << "YES\n";
    else cout << "NO\n";
    return 0;
}