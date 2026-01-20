#include <iostream>
#include <queue>
using namespace std;

bool nodeArr[200][200];
char colorArr[200];
bool isBicolorable;
queue<pair<int, char>> todo;

void draw(int node, char color, int n){
	// Check color
	if(colorArr[node] != 'N'){
		if(colorArr[node] != color){
			isBicolorable = false;
		}
		return;
	}
	
	// Draw
	colorArr[node] = color;
	for(int i=0; i<n; i++){
		if(nodeArr[node][i]){
			todo.push({i, color == 'A' ? 'B' : 'A'});
		}
	}
}

int main(){
	int n, l;
	while(cin >> n >> l){
		// Init
		isBicolorable = true;
		for(int i=0; i<n; i++){
			colorArr[i] = 'N';
			for(int j=0; j<n; j++){
				nodeArr[i][j] = false;
			}
		}
		
		// Store
		while(l--){
			int nodeA, nodeB;
			cin >> nodeA >> nodeB;
			nodeArr[nodeA][nodeB] = true;
			nodeArr[nodeB][nodeA] = true;
		}
		
		// Draw
		todo.push({0, 'A'});
		while(!todo.empty()){
			draw(todo.front().first, todo.front().second, n);
			todo.pop();
		}
		
		if(isBicolorable)
			cout << "BICOLORABLE.\n";
		else
			cout << "NOT BICOLORABLE.\n";
	}
}