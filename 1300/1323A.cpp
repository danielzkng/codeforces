#include <iostream>

using namespace std;

int main(){
    int n;
    cin >> n;
    for(int iter = 0; iter < n; ++iter){
        int j;
        cin >> j;
        if(j == 1) {
            int x;
            cin >> x;
            if(x % 2 == 0) cout << "1\n1\n";
            else cout << "-1\n";
        }
        else {
            int odd = -1;
            bool done = false;
            for(int i = 0; i < j; ++i){
                int k;
                cin >> k;
                if(k % 2 == 0 && !done) {
                    cout << "1\n" << i + 1 << "\n";
                    done = true;
                }
                else if(k % 2 == 1 && !done) {
                    if(odd == -1) odd = i;
                    else {
                        cout << "2\n" << odd + 1 << " " << i + 1 << "\n";
                        done = true;
                    }
                }
            }
        }
    }
    return 0;
}