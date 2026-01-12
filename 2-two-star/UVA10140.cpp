#include <iostream>
#include <cmath>
#define MAX (int)ceil(sqrt(2147483647))
#define MAXA sqrt(MAX)
using namespace std;

struct Ans{
	int c1, c2, d1, d2;
};

Ans findPrime(const bool prime[], const int l, const int u){
	int c1, c2, cd=1000000, d1, d2, dd=0;
	int temp = 0;
	
	for(int i=l; i<=u; i++){
		bool isPrime = true;
		// Search
		if(i<MAX){
			isPrime = prime[i];
		}
		else{
			for(int j=2; j<MAX; j++){
				if(prime[j] && !(i%j)){
					isPrime = false;
					break;
				}
			}
		}
		
		// Compare
		if(isPrime){
			if(!temp){
				temp = i;
				continue;
			}
			if(i-temp<cd){
				c1=temp; c2=i; cd=i-temp; 
			}
			if(i-temp>dd){
				d1=temp; d2=i; dd=i-temp;
			}
			temp=i;
		}
	}
	
	if(cd == 1000000 && dd == 0){
		c1=0,c2=0,d1=0,d2=0;
	}
	Ans ans;
	ans.c1=c1; ans.c2=c2; ans.d1=d1; ans.d2=d2;
	return ans;
}

int main(){
	// Create prime table
	bool prime[MAX]; prime[0]=false; prime[1]=false;
	for(int i=2; i<MAX; i++){
		prime[i] = true;
	}
	for(int i=2; i<=MAXA; i++){
		if(!prime[i])
			continue;
		prime[i] = true;
		for(int j=2; i*j<MAX; j++){
			prime[i*j] = false;
		}
	}
	// Input, output
	int L, U;
	while(cin >> L >> U){
		Ans ans = findPrime(prime, L, U);
		if(ans.c1)
			cout << ans.c1 << ',' << ans.c2 << " are closest, "
				<< ans.d1 << ',' << ans.d2 << " are most distant."
				<< endl;
		else
			cout << "There are no adjacent primes." << endl;
	}
}