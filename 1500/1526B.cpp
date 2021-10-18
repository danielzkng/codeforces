#include <iostream>

using namespace std;

int main(){
    int n;
    cin >> n;
    for(int iter = 0; iter < n; ++iter){
        int k;
        cin >> k;
        if(k > 1099) cout << "YES\n";
        else {
            bool done = false;
            for(int i = 0; i <= k / 111; ++i) {
                if((k - 111 * i) % 11 == 0 ) {
                    cout << "YES\n";
                    done = true;
                    break;
                }
            }
            if(!done) cout << "NO\n";
        }
    }
}