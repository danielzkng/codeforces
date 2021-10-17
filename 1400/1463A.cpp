#include <iostream>

using namespace std;

int main(){
    int cases;
    cin >> cases;
    for(int iter = 0; iter < cases; iter++){
        int a, b, c;
        cin >> a >> b >> c;
        int total = a + b + c;
        int rounds = total / 9;
        
        if ((total % 9 == 0) && (a >= rounds) && (b >= rounds) && (c >= rounds)) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    
    return 0;
}