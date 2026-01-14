#include <iostream>
using namespace std;

int digitSum(int n){
	int sum = 0;
	while(n){
		sum += n % 10;
		n /= 10;
	}
	return sum;
}

bool isSN(const int n){
	// Digit sum of prime factor
	int temp = n;
	int sum1 = 0;
	for(int i=2; i*i<=temp; i++){
		while(!(temp%i)){
			sum1 += digitSum(i);
			temp /= i;
		}
	}
	if(temp == n)
		return false;
	if(temp > 1)
		sum1 += digitSum(temp);
	
	// Digit sum of n
	int sum2 = digitSum(n);
	
	if(sum1 == sum2)
		return true;
	else
		return false;
}

int main(){
	int c;
	cin >> c;
	while(c--){
		int n;
		cin >> n;
		
		while(1){
			if(isSN(n+=1))
				break;
		}
		
		cout << n << endl;
	}
}