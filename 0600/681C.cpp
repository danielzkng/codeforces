#include <bits/stdc++.h>
 
using namespace std;
 
int main(){
    int n;
    cin >> n;
    priority_queue<int, vector<int>, greater<int>> pq;
    vector<int> ops;
    vector<int> args;
    for(int i = 0; i < n; ++i){
        string s;
        cin >> s;
        if(s.compare("insert") == 0) {
            int k;
            cin >> k;
            ops.push_back(1);
            args.push_back(k);
            pq.push(k);
        }
        if(s.compare("getMin") == 0) {
            int k;
            cin >> k;
            while(!pq.empty() && pq.top() < k) {
                ops.push_back(3);
                args.push_back(-1);
                pq.pop();
            }
            if(pq.empty() || pq.top() > k) {
                ops.push_back(1);
                args.push_back(k);
                pq.push(k);
            }
            ops.push_back(2);
            args.push_back(k);
        }
        if(s.compare("removeMin") == 0) {
            if(pq.empty()) {
                int k = 15122;
                ops.push_back(1);
                args.push_back(k);
                pq.push(k);
            }
            
            ops.push_back(3);
            args.push_back(-1);
            pq.pop();
        }
    }
    
    cout << ops.size() << "\n";
    for(int i = 0; i < ops.size(); ++i){
        if(ops[i] == 1) {
            cout << "insert " << args[i] << "\n";
        }
        if(ops[i] == 2) {
            cout << "getMin " << args[i] << "\n";
        }
        if(ops[i] == 3) {
            cout << "removeMin\n";
        }
    }
    return 0;
}