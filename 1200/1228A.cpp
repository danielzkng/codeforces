#include <iostream>

using namespace std;

bool distinct(int i){
    bool used[] = {false, false, false, false, false, false, false, false, false, false};
    while(i != 0){
        int res = i % 10;
        i /= 10;
        if(used[res]) return false;
        else used[res] = true;
    }
    return true;
}

int main(){
    int l, r;
    cin >> l >> r;
    for(int i = l; i <= r; ++i){
        if(distinct(i)){
            cout << i << "\n";
            return 0;
        }
    }
    cout << "-1\n";
    return 0;
}