#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main (){
	string necklace;
	cin >> necklace;
	
	int links = 0;
	int pearls = 0;
	
	for(int i = 0; i < necklace.length(); i++){
		if(necklace[i] == '-'){
			links++;
		}
		else if(necklace[i] == 'o'){
			pearls++;
		}
	}
	
	if(pearls == 0){
		cout << "Yes" << endl;
	}
	else if((links % pearls) == 0){
		cout << "Yes"<< endl;
	}
	else{
		cout << "No" << endl;
	}
	
	return 0;
}