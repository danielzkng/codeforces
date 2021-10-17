#include <iostream>

using namespace std;

int main(){
    int x;
    cin >> x;
    while(x >= 10){
        int out = 0;
        while(x != 0){
            out += x % 10;
            x /= 10;
        }
        x = out;
    }
    
    cout << x << endl;
    
    return 0;
}