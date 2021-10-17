#include <iostream>
#include <map>

using namespace std;

long long choose_2(int n){
    return ((long long)n * ((long long)n - 1)) / 2;
}

int main(){
    int cases;
    cin >> cases;
    
    for(int iter = 0; iter < cases; ++iter){
        map<int,int> in;
        int len;
        cin >> len;
        for(int i = 1; i <= len; ++i){
            int val;
            cin >> val;
            val -= i;
            if(in.count(val) != 0){
                in[val]++;
            }
            else{
                in[val] = 1;
            }
        }
        
        map<int, int>::iterator it;
        long long out = 0;

        for (it = in.begin(); it != in.end(); it++)
        {
            out += choose_2(it->second);
        }
        cout << out << "\n";
    }
    
    return 0;
}