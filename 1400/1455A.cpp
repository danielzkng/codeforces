#include <iostream>
#include <string>

using namespace std;

int main(){
    int t;
    cin >> t;
    for(int iter = 0; iter < t; ++iter){
        string s;
        cin >> s;
        cout << s.length() << "\n";
    }
    return 0;
}