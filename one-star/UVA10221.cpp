#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
#define r 6440

int main(){
	double s, a;
	string type;
	while(cin >> s >> a >> type){
		// min -> deg
		if(type == "min"){
			a /= 60;
		}
		
		// Calculate arc, chord distance
		double arcDistance = 2 * (s + r) * M_PI * (a / 360);
		double chordDistance = 2 * (cos((90 - (a / 2)) / 180 * M_PI) * (s + r));
			
		// Output
		cout  << setprecision(6) << fixed << arcDistance << ' ' << chordDistance << endl;
	}
}