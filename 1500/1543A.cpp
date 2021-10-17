#include <iostream>

using namespace std;

int main(){
    int t;
    cin >> t;
    for(int iter = 0; iter < t; ++iter){
        long long a, b;
        cin >> a >> b;
        long long diff = a - b;
        if(diff == 0) cout << "0 0\n";
        else{
            if(diff < 0) diff *= -1;
            long long mod = a % diff;
            long long invmod = diff - mod;
            if(mod < invmod) cout << diff << " " << mod << "\n";
            else cout << diff << " " << invmod << "\n";
        }
    }
    return 0;
}