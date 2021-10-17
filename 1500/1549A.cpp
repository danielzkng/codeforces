#include <iostream>

using namespace std;

int main(){
    int n;
    cin >> n;
    for(int iter = 0; iter < n; ++iter){
        int k;
        cin >> k;
        cout << "2 " << k - 1 << "\n";
    }
    return 0;
}