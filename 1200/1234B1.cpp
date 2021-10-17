#include <iostream>
#include <vector>

using namespace std;
int main(){
    int n, k;
    cin >> n >> k;
    vector<int> p;
    for(int i = 0; i < n; ++i) {
        int x;
        cin >> x;
        bool in = false;
        for(int j = 0; j < p.size(); ++j){
            if (p[j] == x) {
                in = true;
                break;
            }
        }
        if(!in) {
            p.insert(p.begin(), x);
            if(p.size() > k) p.pop_back();
        }
    }
    cout << p.size() << "\n";
    for(int i = 0; i < p.size(); ++i){
        cout << p[i] << " ";
    }
    cout << "\n";
    return 0;
}