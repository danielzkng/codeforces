#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    int t;
    cin >> t;
    for(int iter = 0; iter < t; ++iter){
        int n;
        cin >> n;
        string s;
        cin >> s;
        vector<char> v;
        for(int i = 0; i < n; ++i){
            v.push_back(s[i]);
        }
        sort(v.begin(), v.end());
        for(int i = 0; i < n; ++i){
            cout << v[i];
        }
        cout << "\n";
    }
    return 0;
}