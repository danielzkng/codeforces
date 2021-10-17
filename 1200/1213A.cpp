#include <iostream>

using namespace std;

int main(){
    int n;
    cin >> n;
    
    int evens = 0;
    int odds = 0;
    for(int i = 0; i < n; ++i){
        int k;
        cin >> k;
        if(k % 2 == 0) evens++;
        else odds++;
    }
    
    if(evens > odds) cout << odds << "\n";
    else cout << evens << "\n";
}