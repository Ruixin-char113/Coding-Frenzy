#include <iostream>
#include <algorithm>
using namespace std;
int main(){
	int N;
	while(cin >> N){
		int *input = new int[N];
		for(int i=0; i<N; i++)
			cin >> input[i];
		sort(input,input+N);
		
		int Mid = 0; int Mid2 = 0;
		if(N%2){
			Mid = input[N/2];
			Mid2 = Mid;
		}
		else{
			Mid = input[(N-1)/2];
			Mid2 = input[N/2];
		}
		
		int MidTotal = 0;
		for(int i = 0; i<N; i++)
			if(input[i] == Mid || input[i] == Mid2)
				MidTotal++;
				
		cout << Mid << ' ' 
				<< MidTotal << ' '
				<< Mid2 - Mid + 1
				<< endl;
		delete[]input;
	}
}

/* No sort ver.
#include <iostream>
#include <cmath>
#include <set>
using namespace std;

int main(){
	int totalCase = 0;
	
	while(cin >> totalCase){
		// Store number
		int input[65536] = { 0 };
		set<int> inputSet;
		int temp = 0;
		for(int i = 0; i < totalCase; i++){
			cin >> temp;
			input[temp]++;
			inputSet.insert(temp);
		}
		
		// Find Median
		double target = totalCase / 2;
		int countTarget = 0;
		int minMedian, maxMedian;
		for(int i : inputSet){
			if(!countTarget)
				minMedian = i;
				
			if(target - countTarget >= input[i]){
				minMedian = i;
				countTarget += input[i];
				continue;
			}
			else if(target - countTarget < input[i] 
					&& target - countTarget > 0){
				minMedian = i;
				maxMedian = i;
				break;
			}
			else if(target - countTarget < input[i]){
				maxMedian = i;
				break;
			}
		}
		
		// Output
		if(maxMedian == minMedian){
			cout << minMedian << ' '
				<< input[minMedian] << ' '
				<< '1' << endl;
		}
		else{
			cout << minMedian << ' '
				<< input[minMedian] + input[maxMedian] << ' '
				<< maxMedian - minMedian + 1 << endl;
		}
		
	}
}
*/