#include <bits/stdc++.h>
#define int int64_t
#define rep(i,a,b) for(int i = (a); i < (b); ++i)
#define INF 2e9

using namespace std;

signed main(){
    int n;
    cin >> n;
    int adj[n][n];
    int apsp[n][n];
    for(int i = 0; i < n; ++i) {
        for(int j = 0; j < n; ++j) {
            cin >> adj[i][j];
            apsp[i][j] = adj[i][j];
        }
    }

    int order[n];

    for(int i = 0; i < n; ++i) {
        cin >> order[i];
        --order[i];
    }

    stack<int> sums;
    vector<int> included;

    // important code here
    for(int i = 0; i < n; ++i) {
        int v = order[n - i - 1];
        included.push_back(v);

        for(int j = 0; j < n; ++j) {
            for(int k = 0; k < n; ++k) {
                if(apsp[j][k] > apsp[j][v] + apsp[v][k]) apsp[j][k] = apsp[j][v] + apsp[v][k];
            }
        }

        int sum = 0;
        for(int j = 0; j < included.size(); ++j) {
            for(int k = 0; k < included.size(); ++k) {
                if(j != k) sum += apsp[included[j]][included[k]];
            } 
        }
        sums.push(sum);
    }

    for(int i = 0; i < n; ++i) {
        cout << sums.top() << " ";
        sums.pop();
    }
    cout << "\n";
    return 0;
}