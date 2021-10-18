#include <iostream>
#include <stack>
#include <queue>

using namespace std;

int main(){
    int cases;
    cin >> cases;
    for(int zzz = 0; zzz < cases; ++zzz){
        int len;
        cin >> len;
        
        int min_p[len];
        int max_p[len];
        int last = 0;
        
        for(int i = 0; i < len; i++){
            int next;
            cin >> next;
            
            if(next != last){
                last = next;
                min_p[i] = next;
                max_p[i] = next;
            }
            
            else{
                min_p[i] = -1;
                max_p[i] = -1;
            }
        }
        
        queue<int> min_q;
        stack<int> max_stk;
        
        last = 0;
        for(int i = 0; i < len; i++){
            if(min_p[i] != -1){
                for(int j = last + 1; j < min_p[i]; j++){
                    min_q.push(j);
                    max_stk.push(j);
                }
                last = min_p[i];
            }
            else{
                //it is -1
                min_p[i] = min_q.front();
                min_q.pop();
                max_p[i] = max_stk.top();
                max_stk.pop();
            }
        }
        
        for(int i = 0; i < len; i++){
            cout << min_p[i];
            if(i != len - 1){
                cout << " ";
            }
        }
        cout << endl;
        
        for(int i = 0; i < len; i++){
            cout << max_p[i];
            if(i != len - 1){
                cout << " ";
            }
        }
        cout << endl;
    }
    
    return 0;
}
