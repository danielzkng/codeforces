#include <bits/stdc++.h>
#define ll long long

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string names[201];
    names[0] = "polycarp";
    int depths[201];
    depths[0] = 1;
    
    int n;
    cin >> n;

    vector<int> graph[n + 1];

    for(int i = 0; i < n; ++i){
        string a, b, fill;
        cin >> a >> fill >> b;
        for(int i = 0; i < a.length(); i++)
        {
            a[i] = tolower(a[i]);
        }
        for(int i = 0; i < b.length(); i++)
        {
            b[i] = tolower(b[i]);
        }

        int x;
        for(int j = 0; j <= i; ++j){
            if(b.compare(names[j]) == 0) {
                x = j;
            }
        }
       //  cerr << x << " " << b << "\n";
        names[i + 1] = a;
        graph[x].push_back(i + 1);
    }

    queue<int> to_check;
    to_check.push(0);

    while(!to_check.empty()) {
        int c = to_check.front();
        to_check.pop();
        for(int i = 0; i < graph[c].size(); ++i) {
            int x = graph[c][i];
            depths[x] = depths[c] + 1;
            to_check.push(x);
        }
    }

    int x = 0;
    for(int i = 0; i < n + 1; ++i){
        if(depths[i] > x) {
            x = depths[i];
        }
    }

    cout << x << "\n";

    return 0;
}