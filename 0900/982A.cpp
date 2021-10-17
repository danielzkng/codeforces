#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main(){
	int n;
	cin >> n;
	string chairs;
	cin >> chairs;
	
	int numberOfZeroes = -1;
	bool conditionMet = true;
	
	if(chairs[0] == '0'){
		numberOfZeroes = 2;
	}
	else{
		numberOfZeroes = 0;
	}
	
	for(int i = 1; i < n; i++){
		if(chairs[i] == '0' && numberOfZeroes == 2){
			conditionMet = false;
			break;
		}
		else if(chairs[i] == '1' && numberOfZeroes == 0){
			conditionMet = false;
			break;
		}
		else if(chairs[i] == '1'){
			numberOfZeroes = 0;
		}
		else if(chairs[i] == '0'){
			numberOfZeroes++;
		}
	}
	if(numberOfZeroes == 2){
		conditionMet = false;
	}
	
	if(conditionMet){
		cout << "Yes" << endl;
	}
	else{
		cout << "No" << endl;
	}
	
	return 0;
}