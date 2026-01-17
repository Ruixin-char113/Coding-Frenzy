#include <iostream>
#include <cmath>
#include <iomanip>
#define PI 2*acos(0)
using namespace std;

int main(){
	float a;
	while(cin >> a){
		double z = a * a - a * a * PI / 6 - a * a * sqrt(3) / 4;
		double y = a * a - a * a * PI / 4 - 2 * z;
		double x = a * a - 4 * y - 4 * z;
		cout << setprecision(3) << fixed 
			<< x << ' '
			<< 4 * y << ' '
			<< 4 * z << endl;
	}
}