#include <bits/stdc++.h>

using namespace std;

int main(){
    int primes[] = {2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47};
    int count = 0;
    for(int i = 0; i < 15; ++i) {
        cout << primes[i] << "\n";
        fflush(stdout);
        string s;
        cin >> s;
        if(s[0] == 'y') ++count;
        if(count == 1 && primes[i] * primes[i] <= 100) {
            cout << primes[i] * primes[i] << "\n";
            fflush(stdout);
            cin >> s;
            if(s[0] == 'y') ++count;
        }
        if(count >= 2) {
            cout << "composite\n";
            break;
        }
    }
    if(count < 2) cout << "prime\n";
    return 0;
}