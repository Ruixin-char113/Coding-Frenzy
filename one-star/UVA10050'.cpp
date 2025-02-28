#include <iostream>
#include <set>
using namespace std;

int main(){
	int T = 0;
	cin >> T;
	while(T--){
		// Input number of {simulation day, political parties}
		int N = 0;
		int P = 0;
		cin >> N >> P;
		
		// Recrod different parties hartal day
		set<int> hartalDays;
		for(int i = 0; i < P; i++){
			int freq = 0;
			cin >> freq;
			
			int maxHartal = N / freq;
			for(int j = 1; j <= maxHartal; j++){
				hartalDays.insert(j * freq);
			}
		}
		
		// Erase hartal days in weekly holidays
		for(int i = 0; ;i++){
			hartalDays.erase(6 + 7 * i);
			hartalDays.erase(7 + 7 * i);
			if((6 + 7 * i) > N)
				break;
		}
		
		cout << hartalDays.size() << endl;
	}	
}