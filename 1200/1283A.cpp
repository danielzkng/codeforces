#include <iostream>

using namespace std;

int main(){
    int cases;
    cin >> cases;
    for(int iter = 0; iter < cases; ++iter){
        int n, k;
        cin >> n >> k;
        int time = n * 60 + k;
        cout << 1440 - time << "\n";
    }
    
    return 0;
}