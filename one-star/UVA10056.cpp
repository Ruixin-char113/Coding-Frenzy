#include <iostream>
#include <iomanip>
#include <math.h>
using namespace std;
int main(){
	int S;
	cin >> S;
	while(S){
		int N, I;
		float P;
		cin >> N >> P >> I;
				//a=(1-P)^(I-1)*P,r=(1-P)^N;
		if(P)
			cout << setprecision(4) << fixed
				 << pow(1-P,(I-1))*P * (1-pow(1-P,N*60)) / (1-pow(1-P,N))
				 << endl;
		else
			cout << 0.0000 << endl;
		S--;
	}
}
