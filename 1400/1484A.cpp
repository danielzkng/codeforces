#include <iostream>

using namespace std;

int main(){
    int cases;
    cin >> cases;
    
    for(int iter = 0; iter < cases; ++iter){
        int a, b;
        cin >> a >> b;
        cout << a * b << "\n";
    }
    
    return 0;
}