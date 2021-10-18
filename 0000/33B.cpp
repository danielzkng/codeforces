#include <bits/stdc++.h>
#define int int64_t
#define rep(i,a,b) for(int i = (a); i < (b); ++i)
#define INF 2e9

using namespace std;

// character to corresponding int from 0 to 25: gi = GET INDEX
int gi(char c) {
    return (int)(c - 'a');
}

signed main(){
    string a, b;
    cin >> a >> b;

    int x;
    cin >> x;

    int adj[26][26];
    for(int i = 0; i < 26; ++i) {
        for(int j = 0; j < 26; ++j) {
            adj[i][j] = (i == j ? 0 : INF);
        }
    }

    for(int i = 0; i < x; ++i) {
        char first, second;
        int cost;
        cin >> first >> second >> cost;
        if(adj[gi(first)][gi(second)] > cost) adj[gi(first)][gi(second)] = cost;
    }

    if(a.size() != b.size()) {
        cout << "-1\n";
        return 0;
    }

    for(int i = 0; i < 26; ++i) {
        for(int j = 0; j < 26; ++j) {
            for(int k = 0; k < 26; ++k) {
                if(adj[j][k] > adj[j][i] + adj[i][k]) adj[j][k] = adj[j][i] + adj[i][k];
            }
        }
    }

    int costs[26][26];
    int letters[26][26];
    for(int i = 0; i < 26; ++i) {
        for(int j = 0; j < 26; ++j) {
            int min_cost = INF;
            for(int k = 0; k < 26; ++k) {
                if(adj[i][k] + adj[j][k] < min_cost) {
                    min_cost = adj[i][k] + adj[j][k];
                    letters[i][j] = k;
                }
            }
            costs[i][j] = min_cost;
        }
    }

    string out = "";
    int cost = 0;
    for(int i = 0; i < a.size(); ++i) {
        int letter = letters[gi(a[i])][gi(b[i])];
        int k = costs[gi(a[i])][gi(b[i])];
        if(k == INF) {
            cout << "-1\n";
            return 0;
        }
        cost += k;
        out = out + (char)(letter + 'a');
    }
    cout << cost << "\n" << out << "\n";

    return 0;
}