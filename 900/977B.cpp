#include <iostream>
#include <string>

using namespace std;

int main(){
	int length;
	cin >> length;
	string input;
	cin >> input;
	
	string twoGrams[99];
	int twoGramCounts[99];
	for(int i = 0; i < 99; i++){
		twoGrams[i] = "\0";
		twoGramCounts[i] = 0;
	}
	
	int maxNum = 0;
	
	for(int i = 0; i < length - 1; i ++){
		string toCheck = input.substr(i, 2);
		for(int j = 0; j <= i; j++){
			if(twoGrams[j] == toCheck){
				twoGramCounts[j]++;
				if(twoGramCounts[j] > maxNum){
					maxNum = twoGramCounts[j];
				}
				break;
			}
			else if(twoGrams[j] == "\0"){
				twoGrams[j] = toCheck;
				twoGramCounts[j] = 1;
				if(twoGramCounts[j] > maxNum){
					maxNum = twoGramCounts[j];
				}
				break;
			}
		}
	}
	
	for(int i = 0; i < length - 1; i++){
		if(twoGramCounts[i] == maxNum){
			cout << twoGrams[i] << endl;
			break;
		}
	}
	
	return 0;
}