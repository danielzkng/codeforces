#include <iostream>
#include <vector>

using namespace std;

int main(){
    int count;
    cin >> count;
    int last = 0;
    int curr = 0;
    vector<int> heights;
    for(int i = 0; i < count; ++i){
        last = curr;
        cin >> curr;
        if(curr == 1 && last != 0) {
            heights.push_back(last);
        }
    }
    heights.push_back(curr);
    cout << heights.size() << "\n";
    for(int i = 0; i < heights.size(); ++i){
        cout << heights[i] << " ";
    }
    cout << "\n";
    return 0;
}