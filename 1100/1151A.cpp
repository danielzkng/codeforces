#include <iostream>
#include <string>

using namespace std;

int main(){
	int n;
	cin >> n;
	
	string s;
	cin >> s;
	
	//need to find differences from A, C, T, G
	int best = 99999;
	for(int i = 0; i < s.length() - 3; i++){
		int distanceFromA = s[i] - 'A';
		if(distanceFromA > 13) distanceFromA = 26 - distanceFromA;
		int distanceFromC = s[i + 1] - 'C';
		if(distanceFromC < 0) distanceFromC *= -1;
		if(distanceFromC > 13) distanceFromC = 26 - distanceFromC;
		int distanceFromT = s[i + 2] - 'T';
		if(distanceFromT < 0) distanceFromT *= -1;
		if(distanceFromT > 13) distanceFromT = 26 - distanceFromT;
		int distanceFromG = s[i + 3] - 'G';
		if(distanceFromG < 0) distanceFromG *= -1;
		if(distanceFromG > 13) distanceFromG = 26 - distanceFromG;
		
		if(distanceFromA + distanceFromC + distanceFromG + distanceFromT < best){
			best = distanceFromA + distanceFromC + distanceFromG + distanceFromT;
		}
	}
	cout << best << endl;
	return 0;
}