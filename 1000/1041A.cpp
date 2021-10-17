#include <iostream>

using namespace std;

int main(){
    int n;
    cin >> n;
    int min = 1999999999;
    int max = -1;
    for(int i = 0; i < n; ++i){
        int k;
        cin >> k;
        if(k > max) max = k;
        if(k < min) min = k;
    }
    int total = max - min + 1;
    cout << total - n << "\n";
}