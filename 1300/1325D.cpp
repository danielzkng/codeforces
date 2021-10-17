#include <iostream>
#include <vector>

using namespace std;

int main(){
    long long x, s;
    cin >> x >> s;
    long long oldx = x;
    long long olds = s;
    vector<int> counts;
    int n = 0;
    bool valid = s >= x;
    bool carry = false;
    bool dbg = false;
    while(s != 0) {
        int xmod = x % 2;
        int smod = s % 2;
        if(dbg) cout << carry << " " << xmod << " " << smod << endl;
        if(!carry){
            if(smod == 0) {
                if(xmod == 0){
                    counts.push_back(0);
                    carry = false;
                } else {
                    counts.push_back(1);
                    if(n > 0) counts[n - 1] += 2;
                    else {
                        if (dbg) cout << "break1" << endl;
                        valid = false;
                        break;
                    }
                    carry = true;
                }
            } else {
                if(xmod == 0) {
                    counts.push_back(0);
                    if(n > 0) counts[n - 1] += 2;
                    else {
                        if (dbg) cout << "break2" << endl;
                        valid = false;
                        break;
                    }
                    carry = false;
                } else {
                    counts.push_back(1);
                    carry = false;
                }
            }
        } else {
            if(xmod == smod){ 
                if(dbg) cout << "break3" << endl;
                valid = false;
                break;
            }
            else {
                if(xmod == 0) {
                    counts.push_back(0);
                    carry = false;
                } else {
                    counts.push_back(1);
                    carry = true;
                }
            }
        }
        ++n;
        x /= 2;
        s /= 2;
    }
    if(valid) {
        int max = 0;
        long long first = 0;
        long long second = 0;
        long long third = 0;
        long long place = 1;
        for(int i = 0 ; i < n; ++i){
            if(counts[i] > max) max = counts[i];
            if(counts[i] >= 1) first += place;
            if(counts[i] >= 2) second += place;
            if(counts[i] >= 3) third += place;
            place *= 2;
        }
        cout << max << "\n";
        if(max >= 1) cout << first << " ";
        if(max >= 2) cout << second << " ";
        if(max == 3) cout << third;
        cout << "\n";
    } else {
        if(olds >= oldx && olds % 2 == oldx % 2) {
            cout << 3 << "\n";
            cout << oldx << " " << (olds - oldx) / 2 << " " << (olds - oldx) / 2 << "\n";
        } else {
            cout << -1 << "\n";
        }
    }
}