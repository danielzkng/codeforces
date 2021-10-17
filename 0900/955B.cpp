#include <iostream>
#include <string>

using namespace std;

int main(){
	string input;
	cin >> input;
	
	bool conditionMet = true;
	
	if(input.length() <= 3){
		conditionMet = false;
	}
	else{
		char charactersUsed[26];
		int characterCount[26];
		for(int i = 0; i < 26; i++){
			charactersUsed[i] = '\0';
			characterCount[i] = 0;
		}
		for(int i = 0; i < input.length(); i++){
			char currentChar = input[i];
			for(int i = 0; i < 26; i++){
				if(charactersUsed[i] == currentChar){
					characterCount[i]++;
					break;
				}
				else if(charactersUsed[i] == '\0'){
					charactersUsed[i] = currentChar;
					characterCount[i]++;
					break;
				}
			}
		}
		if(charactersUsed[1] == '\0'){
			//there is only one character used
			conditionMet = false;
		}
		else if(charactersUsed[2] == '\0' && (characterCount[1] == 1 || characterCount[0] == 1)){
			conditionMet = false;
		}
		else if(charactersUsed[4] != '\0'){
			conditionMet = false;
		}
	}
	
	if(conditionMet){
		cout << "Yes" << endl;
	}
	else{
		cout << "No" << endl;
	}

	return 0;
}