#include <iostream>
#include <string>

using namespace std;

int main(){
    int k;
    cin >> k;
    string s;
    cin >> s;
    int left = 0;
    int right = 0;
    for(int i = 0; i < k; ++i){
        if(s[i] == 'L') left++;
        else right++;
    }
    
    cout << left + right + 1 << "\n";
    return 0;
}