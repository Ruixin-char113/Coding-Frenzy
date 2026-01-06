#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main(){
	double l, w;
	while(cin >> l >> w){
		if(l < w) swap(l, w);
		double x = ((l+w)-sqrt(l*l-l*w+w*w))/6;
		cout << setprecision(3) << fixed
			<< x << ' '
			<< 0.0 << ' '
			<< w/2 << endl;
	}
}