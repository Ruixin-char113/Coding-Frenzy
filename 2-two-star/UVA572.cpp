#include <iostream>
using namespace std;
int m, n;
char land[101][101];
bool detected[101][101];

void detector(int x, int y){
	if(x<0||y<0 || x>=m||y>=n || detected[x][y] || land[x][y] == '*')
		return;
	detected[x][y] = true;
	// Search neighbors
	for(int i=-1; i<=1; i++){
		for(int j=-1; j<=1; j++){
			detector(x+i, y+j);
		}
	}
}

int main(){
	while(cin >> m >> n && m){
		// Input
		for(int i=0; i<m; i++){
			for(int j=0; j<n; j++){
				detected[i][j] = false;
				cin >> land[i][j];
			}
		}
		
		// Search
		int oil = 0;
		for(int i=0; i<m; i++){
			for(int j=0; j<n; j++){
				// Found a new oil deposit
				if(land[i][j]=='@' && !detected[i][j]){
					oil++;
					detector(i, j);
				}
			}
		}
		
		// Output
		cout << oil << endl;
	}
}