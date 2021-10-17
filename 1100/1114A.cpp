#include <iostream>

using namespace std;

int main(){
    int a, b, c;
    cin >> a >> b >> c;
    int x;
    cin >> x;
    if(x < a) {
        cout << "NO\n";
        return 0;
    }
    x -= a;
    int y;
    cin >> y;
    x += y;
    if(x < b) {
        cout << "NO\n";
        return 0;
    }
    x -= b;
    cin >> y;
    x += y;
    if(x < c) {
        cout << "NO\n";
        return 0;
    }
    cout << "YES\n";
    return 0;
}