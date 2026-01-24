#include <iostream>
#include <set>
#include <map>
using namespace std;

int main(){
	int n;
	// New case
	while(cin >> n && n){
		map<set<int>, int> combinations;
		int bestCom = 0, bestComN = 0;
		// New student
		while(n--){
			set<int> combination;
			// Course
			int i=5;
			while(i--){
				int courseNumber;
				cin >> courseNumber;
				combination.insert(courseNumber);
			}
			combinations[combination]++;
			// Store
			if(bestComN < combinations[combination]){
				bestComN = combinations[combination];
				bestCom = 1;
			}
			else if(bestComN == combinations[combination]){
				bestCom++;
			}
		}
		// Output
		cout << bestCom * bestComN << endl;
	}
}