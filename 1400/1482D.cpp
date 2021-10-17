#include <bits/stdc++.h>
#define INF 1e9 + 1e8
#define ll long long

using namespace std;

int gcd(int a, int b){
    if (b == 0)
       return a;
    return gcd(b, a % b); 
}

int main(){
    int t;
    cin >> t;

    for(int iter = 0; iter < t; ++iter){
        int n;
        cin >> n;
        int arr[n], next[n], prev[n];
        vector<int> out;
        for(int i = 0; i < n; ++i) {
            cin >> arr[i];
            next[i] = (i + 1) % n;
            prev[i] = (i == 0 ? n - 1 : i - 1);
        }

        set<pair<int, int> > bad_pairs;

        for(int i = 0; i < n; ++i) {
            if(gcd(arr[i], arr[next[i]]) == 1) {
                bad_pairs.insert(make_pair(i, next[i]));
            }
        }

        int curr = 0;
        int k = 0;
        while(!bad_pairs.empty() && k < n) {
            pair<int, int> nx = *(bad_pairs.lower_bound(make_pair(curr, 0)));
            if(nx == *(bad_pairs.end())){
                nx = *(bad_pairs.begin());
            }
            int to_remove = nx.second;
            // cout << "removed " << to_remove + 1 << "\n";

            out.push_back(to_remove);
            ++k;
            assert(next[nx.first] == nx.second);

            bad_pairs.erase(nx);
            bad_pairs.erase(make_pair(to_remove, next[to_remove]));
            int u = nx.first;
            int w = next[to_remove];
            prev[w] = u;
            next[u] = w;

            if(gcd(arr[u], arr[w]) == 1) bad_pairs.insert(make_pair(u, w));

            curr = w;
        }
        cout << k;
        for(int i = 0; i < out.size(); ++i){
            cout << " " << out[i] + 1;
        }
        cout << "\n";
    }

    return 0;
}