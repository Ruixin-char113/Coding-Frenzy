#include <iostream>
#include <math.h>
#include <iomanip>
using namespace std;
int main(){
	int s;
	cin >> s;
	while(s--){
		int n;		//number players
		double p,pa;	//probability
		int i;
		
		cin >> n >> p >> i;
		pa=pow(1-p,i-1)*p/(1-pow(1-p,n));
		pa=pa>0.0000?pa:0.0000;
		
		cout << setprecision(4)<<fixed
			<< pa << endl;
	}
}