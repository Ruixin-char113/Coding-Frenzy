#include <iostream>
#include <vector>
#include <queue>
using namespace std;

int main(){
	int C;
	cin >> C;
	while(C--){
		int M;
		cin >> M;
		
		// Input
		int Li, Ri;
		vector<pair<int, int>> LRVec;
		while(cin >> Li >> Ri && (Li + Ri)){
			LRVec.push_back({Li, Ri});
		}
		
		// Search
		int Lpointer = 0;
		bool canCover = true;
		queue<pair<int, int>> ansQueue;
		while(Lpointer < M){
			pair<int, int> tempPair(50001, -50001);
			for(auto x:LRVec){
				if(x.first <= Lpointer && Lpointer < x.second
					&& x.second > tempPair.second){
					tempPair.first = x.first;
					tempPair.second = x.second;
				}
			}
			if(tempPair.second < 0){
				canCover = false;
				break;
			}
			// Store
			Lpointer = tempPair.second;
			ansQueue.push(tempPair);
		}
		
		// Output
		if(canCover){
			cout << ansQueue.size() << endl;
			while(!ansQueue.empty()){
				cout << ansQueue.front().first << ' ' << ansQueue.front().second << endl;
				ansQueue.pop();
			}
		}
		else{
			cout << '0' << endl;
		}
		
		if(C)
			cout << endl;
	}
}