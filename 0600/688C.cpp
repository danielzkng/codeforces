#include <bits/stdc++.h>
#define ll long long

using namespace std;

int flip(int x){
    if (x == 0) return 1;
    return 0;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    vector<vector<int> > x;
    int n, m;
    cin >> n >> m;
    for(int i = 0; i < n; ++i){
        vector<int> k;
        x.push_back(k);
    }

    int colours[n];
    for(int i = 0; i < n; ++i){
        colours[i] = -1;
    }

    for(int i = 0; i < m; ++i){
        int a, b;
        cin >> a >> b;
        a--;
        b--;
        x[a].push_back(b);
        x[b].push_back(a);
    }

    int min_unused = 0;
    colours[0] = 0;
    queue<int> q;
    q.push(0);
    while(!q.empty()) {
        int k = q.front();
        q.pop();
        if(k == min_unused) ++min_unused;
        int col = flip(colours[k]);
        for(int i = 0; i < x[k].size(); ++i){
            if(colours[x[k][i]] == -1) {
                colours[x[k][i]] = col;
                q.push(x[k][i]);
            }
            if(colours[x[k][i]] != col) {
                cout << "-1\n";
                return 0;
            }
        }

        if(q.empty() && min_unused != n) {
            q.push(min_unused);
        }
    }

    vector<int> blue;
    vector<int> red;
    for(int i = 0; i < n; ++i){
        if(colours[i] == 0) {
            blue.push_back(i + 1);
        }
        else if(colours[i] == 1) {
            red.push_back(i + 1);
        }
    }

    cout << blue.size() << "\n";
    for(int i = 0; i < blue.size(); ++i){
        cout << blue[i] << " ";
    }
    cout << "\n" << red.size() << "\n";
    for(int i = 0; i < red.size(); ++i){
        cout << red[i] << " ";
    }
    cout << "\n";

    return 0;
}