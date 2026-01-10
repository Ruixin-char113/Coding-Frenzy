#include <iostream>
using namespace std;

int fgcd(int a, int b){
	while(a %= b){
		swap(a,b);
	}
	return b;
}

int main(){
	int input[1000] = {0};
	while(1){
		int n=0;
		int min, max;
		while(cin >> input[n]){
			if(input[n]==0)
				break;
			if(!n || min>input[n])
				min = input[n];
			if(!n || max<input[n])
				max = input[n];
			n++;
		}
		if(!n)
			break;
			
		int gcd = max - min;
		for(int i=0; i<n; i++){
			gcd = fgcd(input[i]-min, gcd);
		}
		
		cout << gcd << endl;
	}
}