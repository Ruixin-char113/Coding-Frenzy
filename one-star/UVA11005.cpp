#include <iostream>
using namespace std;

int main(){
	int testcaseNumber = 0;
	int countTestcaseNumber = 0;
	cin >> testcaseNumber;
	while(testcaseNumber--){
		countTestcaseNumber++;
		cout << "Case " << countTestcaseNumber << ":" << endl;
		
		// Store cost
		int cost[36] = { 0 };
		for(int i = 0; i < 36; i++){
			cin >> cost[i];
		}
		
		// Handle print number
		int printNumber = 0;
		cin >> printNumber;
		while(printNumber--){
			int testCost[37] = { 0 };
			int cheapestCost;
			
			int testNumber;
			cin >> testNumber;
			cout << "Cheapest base(s) for number " << testNumber << ":";
			
			for(int i = 2; i <= 36; i++){
				int tempTestNumber = testNumber;
				
				// Calculate cost
				while(1){
					if(tempTestNumber){
						testCost[i] += cost[tempTestNumber % i];
						tempTestNumber /= i;
					}
					else
						break;
				}
				
				// Init, Updatae cheapestCost
				if(i == 2 || cheapestCost > testCost[i]){
					cheapestCost = testCost[i];
				}
			}
			
			// Output cheapest cost base
			for(int i = 2; i <= 36; i++){
				if(cheapestCost == testCost[i])
					cout << ' ' << i;
			}
			
			cout << endl;
		}
		
		// Splite case
		if(testcaseNumber)
			cout << endl;
	}
}