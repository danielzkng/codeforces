#include <iostream>
#include <cmath>

using namespace std;

int main(){
    int n;
    cin >> n;
    for(int i = 0; i < n; ++i){
        int k;
        cin >> k;
        double out = ceil(sqrt((double)k));
        cout << (int)out << "\n";
    }
    return 0;
}