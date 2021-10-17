#include <iostream>

using namespace std;

int main(){
    int cases;
    cin >> cases;
    
    for(int iter = 0; iter < cases; iter++){
        int a;
        int b;
        cin >> a >> b;
        int diff = a - b;
        if(diff < 0) diff *= -1;
        
        cout << diff / 10 + (diff % 10 == 0 ? 0 : 1) << endl;
    }
    
    return 0;
}