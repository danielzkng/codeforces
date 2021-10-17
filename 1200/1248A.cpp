#include <iostream>

using namespace std;

int main(){
    int cases;
    cin >> cases;
    for(int iter = 0; iter < cases; ++iter){
        int m, n;
        cin >> m;
        long long m_odd = 0;
        long long m_even = 0;
        long long n_odd = 0;
        long long n_even = 0;
        for(int i = 0; i < m; ++i){
            int k;
            cin >> k;
            if(k % 2 == 0) ++m_even;
            else ++m_odd;
        }
        cin >> n;
        for(int i = 0; i < n; ++i){
            int k;
            cin >> k;
            if(k % 2 ==0) ++n_even;
            else ++n_odd;
        }
        long long out = m_odd * n_odd + m_even * n_even;
        cout << out << "\n";
    }
    return 0;
}