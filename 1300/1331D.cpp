#include <iostream>
#include <string>

using namespace std;

int main(){
    string in;
    cin >> in;
    if((in[6] - '0') % 2 == 0) cout << 0 << endl;
    else cout << 1 << endl;
    
    return 0;
}