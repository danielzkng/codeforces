#include <bits/stdc++.h>
#define ll long long
#define rep(i,a,b) for(int i = (a); i < (b); ++i)

using namespace std;

vector<vector<int> > x;
int n, m;
vector<ll> people;
vector<ll> happy;
vector<ll> totals;
vector<ll> last;

int mad(int total, int score) {
    return (total - score) / 2;
}

ll prop(ll q) {
    for(int i = 0; i < x[q].size(); ++i) {
        int curr = x[q][i];
        if(curr != last[q]) {
            totals[q] += prop(curr);
        }
    }
    return totals[q];
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    for(int iter = 0; iter < t; ++iter){
        x.clear();
        people.clear();
        happy.clear();
        totals.clear();
        last.clear();

        cin >> n >> m;
        for(int i = 0; i < n; ++i) {
            vector<int> k;
            x.push_back(k);
        }

        for(int i = 0; i < n; ++i){
            int x;
            cin >> x;
            people.push_back(x);
        }
        for(int i = 0; i < n; ++i) {
           int x;
           cin >> x;
           happy.push_back(x);
        }

        for(int i = 0; i < n - 1; ++i) {
            int a, b;
            cin >> a >> b;
            a--;
            b--;
            x[a].push_back(b);
            x[b].push_back(a);
        }

        for(int i = 0; i < n; ++i) {
            totals.push_back(people[i]);
            last.push_back(-1);
        }

        queue<int> q;
        q.push(0);
        while(!q.empty()) {
            int curr = q.front();
            q.pop();
            for(int i = 0; i < x[curr].size(); ++i) {
                int a = x[curr][i];
                if(last[a] == -1 && a != 0) {
                    last[a] = curr;
                    q.push(a);
                }
            }
        }

        prop(0);

        /* for(int i = 0; i < n; ++i){
            int p = people[i];
            int nd = last[i];
            while(nd != -1) {
                totals[nd] += p;
                nd = last[nd];
            }
        } */

        ll madge[n];
        for(int i = 0; i < n; ++i) {
            madge[i] = mad(totals[i], happy[i]);
        }

        bool valid = true;
        for(int i = 0; i < n; ++i) {
            int children = 0;
            for(int j = 0; j < x[i].size(); ++j) {
                int asdf = x[i][j];
                if(asdf != last[i]) {
                    children += madge[asdf];
                }
            }
            // cerr << i << " " << madge[i] << " " << children + people[i] << "\n";
            if(madge[i] > children + people[i]) {
                valid = false;
            }
            if(happy[i] % 2 * (happy[i] < 0 ? -1 : 1) != totals[i] % 2) valid = false;
            if(madge[i] > totals[i] || madge[i] < 0) valid = false;
            
        }
        if(valid) cout << "YES\n";
        else cout << "NO\n";
    }

    return 0;
}