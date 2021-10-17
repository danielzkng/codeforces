#include <iostream>

using namespace std;

int main(){
    int cases;
    cin >> cases;
    for(int iter = 0; iter < cases; iter++){
        int n;
        cin >> n;
        for(int i = 0; i < n - 1; i++){
            cout << i + 2 << " ";
        }
        cout << 1 << endl;
    }
    
    return 0;
}