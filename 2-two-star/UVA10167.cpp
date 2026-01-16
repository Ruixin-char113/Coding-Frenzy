#include <iostream>
#include <vector>
#define MAX 500
#define MIN -500
using namespace std;

int main(){
	int N;
	while(cin >> N && N){
		int tN = 2*N;
		vector<pair<int, int>> cherries;
		while(tN--){
			int x, y;
			cin >> x >> y;
			pair<int, int> c(x, y);
			
			cherries.push_back(c);
		}
		
		pair<int, int> ans;
		bool isFound = false;
		// A
		for(int i=MIN; i<=MAX&&!isFound; i++){
			// B
			for(int j=MIN; j<=MAX&&!isFound; j++){
				int pn = 0, nn = 0;
				// Cherries
				for(auto x: cherries){
					int sol = x.first * i + x.second * j;
					if(sol > 0){
						pn++;
					}
					else if(sol < 0){
						nn++;
					}
					else{
						break;
					}
				}
				// Store
				if(pn == nn && pn && nn){
					ans.first = i;
					ans.second = j;
					isFound = true;
				}
			}
		}
		
		cout << ans.first << ' ' << ans.second << endl;
	}
}