#include <iostream>

using namespace std;

int main(){
    int n;
    cin >> n;
    for(int iter = 0; iter < n; ++iter){
        long long in;
        cin >> in;
        cout << in * -1 + 1 << " " << in << "\n";
    }
    return 0;
}