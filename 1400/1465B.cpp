#include <iostream>

using namespace std;

bool is_fair(long long x){
    long long xp = x;
    while(x > 0){
        int k = x % 10;
        x /= 10;
        if(k != 0 && xp % k != 0) return false;
    }
    return true;
}

int main(){
    int t;
    cin >> t;
    for(int iter = 0; iter < t; ++iter){
        long long z;
        cin >> z;
        while(true){
            if(is_fair(z)) {
                cout << z << "\n";
                break;
            }
            ++z;
        }
    }
    return 0;
}