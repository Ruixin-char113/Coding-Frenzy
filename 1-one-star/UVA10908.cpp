#include <iostream>
using namespace std;

int main(){
	// Test cases
	int T;	
	cin >> T;
	
	while(T--){
		int M, N, Q;
		cin >> M >> N >> Q;
		cout << M << ' ' << N << ' ' << Q << endl;
		
		// Input array
		char array[M][N];
		for(int i = 0; i < M; i++){
			for(int j = 0; j < N; j++){
				cin >> array[i][j];
			}
		}
		
		while(Q--){
			
			int length = 3;
			int r, c;
			cin >> r >> c;
			
			char target = array[r][c];
			
			while(1){
				// Left-up(top-left), Right-down(bottle-right)
				int d = (length - 1) / 2;
				int lu_r = r - d, lu_c = c - d;
				int rd_r = r + d, rd_c = c + d;
				if(lu_r < 0 || lu_c < 0 || rd_r >= M || rd_c >= N){
					break;
				}
				
				// Check they are same character
				bool isSameChar_lu = true, isSameChar_rd = true;
				
				for(int i = 0; i <= d * 2; i++){
					if(array[lu_r+i][lu_c] != target || array[lu_r][lu_c+i] != target){
						isSameChar_lu = false;
						break;
					}
				}
				
				for(int i = 0; i <= d * 2; i++){
					if(array[rd_r-i][rd_c] != target || array[rd_r][rd_c-i] != target){
						isSameChar_rd = false;
						break;
					}
				}
				
				// Found different character
				if(isSameChar_lu && isSameChar_rd)
					length+=2;
				else{
					break;
				}
			}
			
			// Output
			length-=2;
			cout << length << endl;
		}
	}
	
	
}