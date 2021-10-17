#include <iostream>
#include <set>

using namespace std;

int main() {
    int t;
    cin >> t;
    for(int iter = 0; iter < t; ++iter){
        set<int> s;
        int n, k;
        cin >> n >> k;
        int max = -1;
        for(int i = 0; i < n; ++i){
            int x;
            cin >> x;
            s.insert(x);
            if(x > max) max = x;
        }
        int mex;
        for(int i = 0; ; ++i) {
            if(s.count(i) == 0) {
                mex = i;
                break;
            }
        }
        if(mex > max) {
            cout << s.size() + k << "\n";
        } else {
            for(int i = 0; i < k; ++i){
                int avg = (mex + max) / 2 + (mex + max) % 2;
                if(s.count(avg) > 0) 
                    break;
                else {
                    s.insert(avg);
                    if(avg == mex){
                        for(int i = avg; ; ++i) {
                            if(s.count(i) == 0){
                                mex = i;
                                break;
                            }
                        }
                    }
                    if (avg > max) max = avg;
                }
            }
            cout << s.size() << "\n";
        }
    }
    return 0;
}