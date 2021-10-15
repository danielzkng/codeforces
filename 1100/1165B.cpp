#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main(){
	int n;
	cin >> n;
	int numEach[200001];
	for(int i = 0; i < 200001; i++){
		numEach[i] = 0;
	}
	for(int i = 0; i < n; i++){
		int k;
		cin >> k;
		numEach[k]++;
	}
	
	int day = 1;
	int least = 0;
	while(day <= n){
		if(numEach[day] > 0){
			day++;
			least = day;
		}
		else{
			bool found = false;
			for(int i = least; i < 200001; i++){
				if(numEach[i] > 0){
					numEach[i]--;
					day++;
					least = i;
					found = true;
					break;
				}
			}
			if(!found){
				break;
			}
		}
	}
	cout << day - 1 << endl;
	
	return 0;
}