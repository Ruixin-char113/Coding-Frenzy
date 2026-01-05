#include <iostream>
using namespace std;

int main(){
	int vt, v0 = 0;
	while(cin >> vt >> v0 && vt && v0){
		int r = vt % (2 * v0);
		// .5
		if(r == v0){
			cout << '0' << endl;
		}
		// floor
		else if(r < v0){
			cout << vt / (2 * v0) << endl;
		}
		// ceil
		else{
			cout << vt / (2 * v0) + 1 << endl;
		}
	}
}

/* VERSION 2
#include <iostream>
#include <cmath>
using namespace std;

int main(){
	int vt, v0 = 0;
	while(cin >> vt >> v0 && vt && v0){
		bool isSame = false;
		int N=0; double L=0;
		pair<int, double> ans(N, L);
		
		for(int n = 2; vt / n > v0; n++){			
			double lt = vt * n - v0 * n * n;
			if(lt > ans.second){
				ans.first = n;
				ans.second = lt;
			}else if(lt == ans.second){
				isSame = true;
				break;
			}
		}
		if(isSame)
			cout << '0' << endl;
		else
			cout << ans.first << endl;
	}
}
*/