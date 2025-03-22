// Formula version
#include <iostream>
#include <cmath>
using namespace std;
int main(){
	int N = 0;
	while(cin >> N){
		cout << N + floor(N / 2) << endl;
	}
}


/* Simulation version
#include <iostream>
using namespace std;
int main(){
	int N = 0;
	while(cin >> N){
		// First round
		int empty = N;
		int ans = N;
		
		while(empty > 1){
			// Count ans
			N = empty / 3;
			ans += N;
			
			// Update empty bottle
			empty %= 3;
			empty += N;
			
			// Borrow bottle
			if(empty == 2){
				ans++;
				break;
			}
		}
		// Output
		cout << ans << endl;
	}
}
*/