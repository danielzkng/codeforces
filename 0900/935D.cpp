#include <bits/stdc++.h>
#define ll long long
#define int long long
#define rep(i,a,b) for(int i = (a); i < (b); ++i)
#define MOD 1000000007

using namespace std;

vector<int> fnum;
vector<int> snum;
int denoms = 0;
int acc = 0;

int n, m;

// Computes a^b mod m
int expmod(int a, int b, int y) {
  int res = 1 % y;
  a = a % y;
  while (b > 0) {
    if (b % 2 == 1) res = (res*a) % y;
    a = a*a % y;
    b = b / 2;
  }
  return res;
}

int inverse(int x, int y) {
  return expmod(x, y-2, y);
}

signed main(){
    cin >> n >> m;
    for(int i = 0; i < n; ++i) {
        int x;
        cin >> x;
        fnum.push_back(x);
    }
    for(int i = 0; i < n; ++i) {
        int x;
        cin >> x;
        snum.push_back(x);
    }

    vector<pair<int, int> > sols; // each pair (a, b) in here represents a / m^b as a probability

    int k = 0;
    while(k < n) {
        if(fnum[k] != 0 && snum[k] != 0) {
            if(fnum[k] == snum[k]) {
                ++k;
                continue;
            }
            ++denoms;
            if(fnum[k] > snum[k]) {
                sols.push_back(make_pair(m, denoms));
            }
            else sols.push_back(make_pair(0, denoms));
            break;
        }

        ++denoms;
        if(fnum[k] == 0 && snum[k] == 0) {
            int num = (m * (m - 1)) / 2;
            sols.push_back(make_pair(num, denoms + 1));
        }
        else {
            if(fnum[k] == 0) {
                sols.push_back(make_pair(m - snum[k], denoms));
            }
            else {
                // snum[k] == 0
                sols.push_back(make_pair(fnum[k] - 1, denoms));
            }
        }
        ++k;
    }

    int inv = inverse(m, MOD);

    int acc = 0;
    int denominator = 1;
    int numerator = 0;
    for(int i = 0; i < sols.size(); ++i) {
        int x = sols[i].first;
        int y = sols[i].second;
        while(acc < y) {
            ++acc;
            denominator *= inv;
            denominator %= MOD;
            numerator *= m;
            numerator %= MOD;
        }

        numerator += x;
        numerator %= MOD;
    }

    // cout << numerator << " " << acc << "\n";
    cout << (denominator * numerator) % MOD << "\n";

    return 0;
}