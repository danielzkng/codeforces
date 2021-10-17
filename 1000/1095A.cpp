#include <iostream>
#include <string>

using namespace std;

int main(){
    int n;
    cin >> n;
    int current = 0;
    int i = 1;
    string s;
    cin >> s;
    string out = "";
    while(current < n){
        out += s[current];
        current += i;
        ++i;
    }
    cout << out << "\n";
    return 0;
}