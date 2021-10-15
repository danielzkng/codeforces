#include <iostream>
#include <string>

using namespace std;

int main(){
	int length;
	cin >> length;
	string input;
	cin >> input;
	
	int total = 0;
	int i;
	
	for(i = 0; i < length - 1; i++){
		if(input[i] == input[i+1]){
			total++;
			if(i == length - 2){
				
			}
		}
		else{
			total++;
			i++;
		}
	}
	
	if(i == length - 1){
		total++;
	}
	
	cout << total << endl;
	
	return 0;
}