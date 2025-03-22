#include <iostream>
using namespace std;

int main(){
	int n = 0;
	cin >> n;
	while(n--){
		int s = 0, d = 0;
		cin >> s >> d;
		
		int large = 0, small = 0;
		// large = s / 2 + d / 2
		large = (s + d) / 2;
		// small = s / 2 - d / 2
		small = (s - d) / 2;
		
		if(large + small == s && large - small == d && large >= 0 && small >= 0)
			cout << large << ' ' << small << endl;
		else
			cout << "impossible" << endl;
	}
}