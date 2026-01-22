#include <iostream>
using namespace std;

int main(){
	int C;
	cin >> C;
	while(C--){
		int L, N;
		cin >> L >> N;
		
		int earl = 0, late = 0;
		/*
		* "All input integers are not bigger than 1000000"
		* 	   				      ^^^^^^^^^^^^^^^^^^^^^^^
		*/
		while(N > 0 && N--){
		//	  ^^^^^
		//for(int i=0; i<N; i++){
			int r;
			cin >> r;
			
			earl = max(earl, min(r, L - r));
			late = max(late, max(r, L - r));
		}
		
		cout << earl << " " << late << endl;
	}
}