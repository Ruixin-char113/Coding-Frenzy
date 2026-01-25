#include <iostream>
using namespace std;

long long getSum_1toN(long long n){
	long long e = 0, sum = 0;
	while(n > 0){
		// sum(1 ~ (n % 10)) + 45 * times * (n % 10).
		sum += (n%10+1)*(n%10)/2 + 45*e*(n%10);
		// 1:    45*0;
		// 10:   45*1; 
		// 100:  45*(1+10); 
		// 1000: 45*(1+10+100);
		e = e*10 + 1;
		n /= 10;
	}
	return sum;
}

int main(){
	long long p, q;
	while(cin >> p >> q && p >= 0){
		cout << getSum_1toN(q) - getSum_1toN(p-1) << endl;
	}
}
