#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main(){
    int cases;
    cin >> cases;
    
    for(int iter = 0; iter < cases; iter++){
        int n;
        cin >> n;
        
        long long total = 0;
        bool connected[n];
        long long weights[n];
        
        for(int i = 0; i < n; i++){
            cin >> weights[i];
            connected[i] = false;
            total += weights[i];
        }
        
        vector<long long> extra;
        
        for(int i = 0; i < n - 1; i++){
            int node1, node2;
            cin >> node1 >> node2;
            node1--; //zero index
            if(connected[node1]) extra.push_back(weights[node1]);
            else connected[node1] = true;
            
            node2--;
            if(connected[node2]) extra.push_back(weights[node2]);
            else connected[node2] = true;
        }
        
        sort(extra.begin(), extra.end());
        
        cout << total;
        
        while(!extra.empty()){
            total += extra.back();
            cout << " " << total;
            extra.pop_back();
        }
        cout << endl;
    }
    
    return 0;
}