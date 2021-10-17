#include <bits/stdc++.h>
#define ll long long
#define INF 1e9 + 1e8

using namespace std;

int main(){
    ll n, m;
    cin >> n >> m;
    ll start, end;
    cin >> start >> end;
    
    ll found[n];
    
    vector<pair<ll, ll> > roads[n + 1];
    for(ll i = 0; i < m; ++i) {
        ll a, b, c;
        cin >> a >> b >> c;
        roads[a].push_back(make_pair(b, c));
        roads[b].push_back(make_pair(a, c));
    }
    
    vector<pair<ll, ll> > newroads[n + 1];
    for(ll i = 1; i <= n; ++i){
        ll range, cost;
        cin >> range >> cost;
        ll visited[n + 1];
        for(ll j = 0; j <= n; ++j){
            visited[j] = INF;
        }
        
        set<pair<ll, ll> > s;
        s.insert(make_pair(0, i));
        
        while(!s.empty()) {
            pair<ll, ll> tmp = *(s.begin());
            s.erase(s.begin());
            
            ll dist = tmp.first;
            ll current = tmp.second;
            
            if(dist > range) break;
            
            if(visited[current] == INF) {
                for(ll j = 0; j < roads[current].size(); ++j){
                    pair<ll, ll> p = roads[current][j];
                    if(visited[p.first] == INF) {
                        s.insert(make_pair(p.second + dist, p.first));
                    }
                }
                visited[current] = dist;
            }
        }
        
        for(ll j = 1; j <= n; ++j){
            if(visited[j] <= range && j != i) newroads[i].push_back(make_pair(j, cost));
        }
    }
    
    ll visited[n + 1];
    for(ll j = 0; j <= n; ++j){
        visited[j] = INF;
    }
    
    set<pair<ll, ll> > s;
    s.insert(make_pair(0, start));
    
    while(!s.empty()) {
        pair<ll, ll> tmp = *(s.begin());
        s.erase(s.begin());
        
        ll dist = tmp.first;
        ll current = tmp.second;
        
        if(visited[current] == INF) {
            for(ll j = 0; j < newroads[current].size(); ++j){
                pair<ll, ll> p = newroads[current][j];
                if(visited[p.first] == INF) {
                    s.insert(make_pair(p.second + dist, p.first));
                }
            }
            visited[current] = dist;
        }

        if(current == end) break;
    }

    if(visited[end] == INF) cout << -1 << "\n";
    else cout << visited[end] << "\n";

    return 0;
}