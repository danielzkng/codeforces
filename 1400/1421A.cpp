#include <iostream>

using namespace std;

int main(){
    int cases;
    cin >> cases;
    for(int iter = 0; iter < cases; ++iter){
        int a, b;
        cin >> a >> b;
        a = a ^ b;
        cout << a << "\n";
    }
    return 0;
}