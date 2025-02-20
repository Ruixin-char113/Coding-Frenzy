#include <iostream>
#include <cmath>
using namespace std;

int main(){
	int a = 0, b = 0;
	while(cin >> a >> b){
		int squareNumber = 0;
		
		// a = 0, b = 0
		if(a == 0 && b == 0){
			break;
		}else{
			a = ceil(sqrt(a));
			b = floor(sqrt(b));
			squareNumber = b - a + 1;
		}
		cout << squareNumber << endl;
	}
}