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
