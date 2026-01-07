#include <iostream>
#include <iomanip>
using namespace std;
int main(){
	int n;
	while(cin >> n && n){
		double sp[n];
		double spT = 0;
		for(int i=0; i<n; i++){
			cin >> sp[i];
			spT += sp[i];
		}
		double avg = spT / n;
		
		double ex1 = 0, ex2 = 0;
		for(int i=0; i<n; i++){
			if(sp[i]>avg){
				ex1 += int((sp[i] - avg)*100)*0.01;
			}
			else{
				ex2 += int((avg - sp[i])*100)*0.01;
			}
		}
		double ex = ex1 > ex2 ? ex1 : ex2;
		
		cout << setprecision(2) << fixed
			<< '$' << ex << endl;
	}
}