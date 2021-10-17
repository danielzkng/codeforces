#include <iostream>

using namespace std;

int main(){
    int k;
    cin >> k;
    for(int iter = 0; iter < k; iter++){
        long long a, b, c;
        cin >> a >> b >> c;
        cout << a + b + c - 1 << endl;
    }
    
    return 0;
}