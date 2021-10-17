#include <iostream>
#include <algorithm>

using namespace std;

int main(){
	int numBarrels = 0;
	int stavesPerBarrel = 0;
	int limit;
	
	cin >> numBarrels >> stavesPerBarrel >> limit;
	
	int staveLengths[numBarrels * stavesPerBarrel];
	
	for(int i = 0; i < numBarrels * stavesPerBarrel; i++){
		cin >> staveLengths[i];
	}
	
	sort(staveLengths, staveLengths + numBarrels * stavesPerBarrel);
	
	int upperLimit = staveLengths[0] + limit;
	
	int barrelMins[numBarrels];
	int everythingElse[numBarrels * (stavesPerBarrel - 1)];
	int index1 = 0;
	
	int possibleBarrels = 0;
	
	for(int i = 0; i < numBarrels * stavesPerBarrel; i++){
		if(i % stavesPerBarrel == 0){
			barrelMins[i / stavesPerBarrel] = staveLengths[i];
			if(staveLengths[i] <= upperLimit){
				possibleBarrels++;
			}
		}
		else{
			if(staveLengths[i] <= upperLimit){
				everythingElse[index1] = staveLengths[i];
				index1++;
				possibleBarrels++;
			}
			else{
				everythingElse[index1] = 0;
				index1++;
			}
		}
	}
	
	if(possibleBarrels < numBarrels){
		cout << 0 << endl;
	}
	else{
		sort(everythingElse, everythingElse + numBarrels * (stavesPerBarrel - 1));
		reverse(everythingElse, everythingElse + numBarrels * (stavesPerBarrel - 1));
		
		long long int finalCount = 0;
		int index = 0;
		
		for(int i = 0; i < numBarrels; i++){
			if(barrelMins[i] <= upperLimit){
				finalCount += barrelMins[i];
			}
			else{
				finalCount += everythingElse[index];
				index++;
			}
		}
		
		cout << finalCount << endl;
	}
	
	return 0;
}
