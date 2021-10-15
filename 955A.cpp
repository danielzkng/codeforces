#include <iostream>
#include <cmath>

using namespace std;

int main(){
	int wakeHour, wakeMin;
	cin >> wakeHour >> wakeMin;
	
	int minsTo20;
	
	if(wakeHour >= 20){
		minsTo20 = -1;
	}
	else{
		minsTo20 = 60 * (19 - wakeHour) + (60 - wakeMin);
	}
	
	double hunger, hungerTick, bunCost, foodPerBun;
	cin >> hunger >> hungerTick >> bunCost >> foodPerBun;
	
	double priceNow = bunCost * ceil(hunger / foodPerBun);
	double salePrice;
	
	if(minsTo20 != -1){
		salePrice = (bunCost * 0.8d) * ceil((hunger + hungerTick * minsTo20) / foodPerBun);
	}
	else{
		salePrice = (bunCost * 0.8d) * ceil(hunger / foodPerBun);
	}
	
	if(salePrice >= priceNow){
		cout << priceNow << endl;
	}
	else{
		cout << salePrice << endl;
	}
	
	return 0;
}