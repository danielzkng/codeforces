#include <iostream>
#include <vector>
#include <stack>

using namespace std;

int main(){
    int t;
    cin >> t;
    for(int iter = 0; iter < t; ++iter) {
        int x;
        cin >> x;
        vector<int> c;
        for(int i = 0; i < x; ++i) {
            int k;
            cin >> k;
            c.push_back(k);
        }
        int acc = 0;
        stack<int> out;
        for(int i = c.size() - 1; i >= 0; --i) {
            if(c[i] > acc) acc = c[i];
            if(acc > 0) {
                out.push(1);
                --acc;
            }
            else out.push(0);
        }
        
        while(!out.empty()) {
            cout << out.top() << " ";
            out.pop();
        }
        cout << "\n";
    }
    return 0;
}