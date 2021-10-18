#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main(){
    int cases;
    cin >> cases;
    for(int zzz = 0; zzz < cases; zzz++){
        int n, k;
        cin >> n >> k;
        string s;
        cin >> s;
        
        vector<int> stars;
        
        for(int i = 0; i < n; i++){
            if(s[i] == '*') stars.push_back(i);
        }
        
        int current = stars[0];
        int total = 1;
        
        
        for(int i = 1; i < stars.size(); i++){
            if(stars[i] > current + k){
                total++;
                current = stars[i - 1];
            }
            
            if(i == stars.size() - 1) total++;
        }
        
        cout << total << endl;
    }
    
    return 0;
}