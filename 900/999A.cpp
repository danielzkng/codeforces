#include <iostream>
#include <algorithm>

using namespace std;

int main(){
	int numProblems, skillLevel;
	cin >> numProblems >> skillLevel;
	
	int difficulties[numProblems];
	
	for(int i = 0; i < numProblems; i++){
		cin >> difficulties[i];
	}
	
	bool allSolved = false;
	int numSolved = 0;
	
	for(int i = 0; i < numProblems; i++){
		if(difficulties[i] > skillLevel){
			break;
		}
		else{
			numSolved++;
			if(i == numProblems - 1){
				allSolved = true;
			}
		}
	}
	
	if(!allSolved){
		for(int i = numProblems - 1; i >= 0; i--){
			if(difficulties[i] > skillLevel){
				break;
			}
			else{
				numSolved++;
			}
		}
	}
	
	cout << numSolved << endl;

	
	return 0;
}