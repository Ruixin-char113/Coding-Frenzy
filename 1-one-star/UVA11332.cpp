#include <iostream>
using namespace std;

int re(int number){
	int number2 = 0;
	while(number){
		number2 += number % 10;
		number/=10;
	}
	if(number2>=10)
		return re(number2);
	else
		return number2;
}

int main(){
	int number;
	while(cin >> number){
		if(number){
			cout << re(number) << endl;
		}
		
	}
}