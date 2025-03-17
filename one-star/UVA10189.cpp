#include <iostream>
using namespace std;

int main(){
	int n, m;
	int number = 0;
	bool isFirstCase = true;
	while(cin >> n >> m && n && m){
		// Split case by blank line
		if(isFirstCase)
			isFirstCase = false;
		else
			cout << endl;
		
		// Output Number
		number++;
		cout << "Field #" << number << ":\n";
		
		// Store data
		char data[100][100];
		for(int i = 0; i < n; i++){
			for(int j = 0; j < m; j++){
				cin >> data[i][j];
			}
		}
		
		// Count mines around a safe square
		int output[100][100] = { 0 };
		for(int i = 0; i < n; i++){
			for(int j = 0; j < m; j++){
				// Mine
				if(data[i][j] == '*'){
					continue;
				}
				else{
					int indexi[8] = { -1, -1, -1,  0,  0,  1,  1,  1 };
					int indexj[8] = { -1,  0,  1, -1,  1, -1,  0,  1 };
					for(int k = 0; k < 8; k++){
						int index_i = indexi[k] + i, index_j = indexj[k] + j;
						if(index_i >= 0 && index_j >= 0 && 
						   index_i < n && index_j < m && 
						   data[index_i][index_j] == '*')
							output[i][j]++;
					}
				}
			}
		}
		
		// Output
		for(int i = 0; i < n; i++){
			for(int j = 0; j < m; j++){
				if(data[i][j] == '*')
					cout << '*';
				else
					cout << output[i][j];
			}
			cout << endl;
		}
	}
}