#include <bits/stdc++.h>
#define ll long long
#define rep(i,a,b) for(int i = (a); i < (b); ++i)
#define INF 1e9 + 100000

using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    vector<vector<pair<ll, ll> > > g;
    for(int i = 0; i < n; ++i) {
        vector<pair<ll, ll> > adder;
        g.push_back(adder);
    }

    for(int i = 0; i < m; ++i) {
        ll a, b, c;
        cin >> a >> b >> c;
        --a;
        --b;
        g[a].push_back(make_pair(c, b));
        g[b].push_back(make_pair(c, a));
    }

    ll from[n], visited[n];
    for(int i = 0; i < n; ++i) {
        from[i] = -1;
        visited[i] = INF;
    }

    set<tuple<ll, ll, ll> > s;
    // dist, node number, parent
    s.insert(make_tuple(0, 0, -1));

    while(!s.empty()) {
        tuple<ll, ll, ll> tmp = *(s.begin());
        s.erase(s.begin());

        ll dist = get<0>(tmp);
        ll current = get<1>(tmp);
        ll parent = get<2>(tmp);

        if(visited[current] == INF) {
            for(int j = 0; j < g[current].size(); ++j){
                pair<ll, ll> p = g[current][j];
                if(visited[p.second] == INF) {
                    s.insert(make_tuple(p.first + dist, p.second, current));
                }
            }
            visited[current] = dist;
            from[current] = parent;
        }
        if(current == n - 1) break;
    }
    
    // for(int i = 0; i < n; ++i) cout << visited[i] << " " << from[i] << "\n";

    if(visited[n - 1] == INF) cout << "-1\n";
    else {
        stack<ll> nodes;
        int x = n - 1;
        while(x != -1) {
            nodes.push(x);
            x = from[x];
        }
        while(!nodes.empty()) {
            cout << nodes.top() + 1 << " ";
            nodes.pop();
        }
        cout << "\n";
    }
    return 0;
}