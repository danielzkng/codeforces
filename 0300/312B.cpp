#include <iostream>

using namespace std;

int main(){
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    
    double first, second;
    first = (double)a / (double)b;
    second = (double)c / (double)d;
    
    double prod = (1 - first) * (1 - second);
    cout << first / (1 - prod) << "\n";
    return 0;
}