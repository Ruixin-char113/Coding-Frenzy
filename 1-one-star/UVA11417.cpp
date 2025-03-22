#include <iostream>
using namespace std;

int gcd(int i, int j){
	int large = max(i, j);
	int small = min(i, j);

	while(1){
		int remainder = large % small;	
		if(remainder){
			large = small;
			small = remainder;
		}
		else{
			return small;
		}
	}	
}


int main(){
	int input = 0;
	while(cin >> input && input){
		int G = 0;
		
		for(int i = 1; i < input; i++){
			for(int j = i + 1; j <= input; j++){
				G += gcd(i, j);
			}
		}
		
		cout << G << endl;
	}
}