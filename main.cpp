#include <iostream>

using namespace std;

int main() {
	
	int multsOfThreeSum = 0;	//Stores total sum of multiples of 3
	int multsOfFiveSum = 0;		//Stores total sum of multiples of 5
	int multsOfFifteenSum = 0;	//Stores total sum of multiples of 15
	
	for(int i = 3; i < 1000; i = i + 3) {
		multsOfThreeSum = multsOfThreeSum + i;
	}
	
	for(int i = 5; i < 1000; i = i + 5) {
		multsOfFiveSum = multsOfFiveSum + i;
	}
	
	for(int i = 15; i < 1000; i = i + 15) {
		multsOfFifteenSum = multsOfFifteenSum + i;
	}
	
	//Adds sum of mults of 3 and 5 and subtracts mults of 15 to remove duplicates
	cout << multsOfThreeSum + multsOfFiveSum - multsOfFifteenSum << endl;
	
	return 0;
}
