#include <iostream>

using namespace std;

int main(){
    int a, b, c, max;
    cin >> max >> a >> b >> c;
    if(a > max){
        int temp = max;
        max = a;
        a = temp;
    }
    if(b > max){
        int temp = max;
        max = b;
        b = temp;
    }
    if(c > max){
        int temp = max;
        max = c;
        c = temp;
    }
    
    cout << max - a << " " << max - b << " " << max - c << "\n";
}