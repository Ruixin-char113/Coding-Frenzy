#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

bool isPrime(int n){
	for(int i=2; i<=sqrt(n); i++){
		if(!(n%i))
			return false;
	}
	return true;
}

int main(){
	int a, b;
	while(cin >> a >> b){
		// Count
		int rp = 0, total = 0;
		for(int i=a; i<=b; i++){
			if(isPrime(i*i+i+41))
				rp++;
			total++;
		}
		// Fix, output
		float ans = round(float(rp) / total * 10000) / 100;
		cout << setprecision(2) << fixed 
			<< ans << endl;
	}
}