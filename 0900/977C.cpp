#include <iostream>
#include <algorithm>

using namespace std;

int main(){
	int seqLength, separator;
	cin >> seqLength >> separator;
	int sequence[seqLength];
	
	for(int i = 0; i < seqLength; i++){
		cin >> sequence[i];
	}
	
	//sort the thing
	sort(sequence, sequence + seqLength);
	
	if(separator == 0){
		if(sequence[0] == 1){
			cout << -1 << endl;
		}
		else{
			cout << 1 << endl;
		}
		return 0;
	}
	
	
	int ans = sequence[separator - 1];
	int count = 0;
	for(int i = 0; i < seqLength; i++){
		if(ans >= sequence[i]){
			count++;
		}
	}
	if(count != separator){
		cout << -1 << endl;
	}
	else{
		cout << ans << endl;
	}
	
	return 0;
}