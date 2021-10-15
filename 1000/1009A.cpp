#include <iostream>
#include <fstream>
#include <string>
#include <cctype>
#include <algorithm>
#include <cmath>
#include <vector>

using namespace std;

int main(){
	int games, bills;
	cin >> games >> bills;
	
	int game_prices[games];
	
	for(int i = 0; i < games; i++){
		cin >> game_prices[i];
	}
	
	int bill_values[bills];
	
	for(int i = 0; i < games; i++){
		cin >> bill_values[i];
	}
	
	int index = 1;
	int next_bill = bill_values[0];
	int total = 0;
	
	for(int i = 0; i < games; i++){
		if(next_bill >= game_prices[i]){
			total++;
			if(index < bills){
				next_bill = bill_values[index];
				index++;
			}
			else{
				break;
			}
		}
	}
	
	cout << total << endl;
	
	return 0;
}