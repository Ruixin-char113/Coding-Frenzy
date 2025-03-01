#include <iostream>
#include <cmath>
using namespace std;

int main(){
	int N = 0;
	int countN = 0;
	cin >> N;
	while(N--){
		countN++;
		cout << "Pair #" << countN << ": ";
		
		string S1, S2;
		cin >> S1 >> S2;
		
		// Binary to decimal
		int dec1 = 0;
		int dec2 = 0;
		for(int i = 0; i <= max(S1.length(), S2.length()) - 1; i++){
			if(S1.length() > i){
				dec1 += (S1[i] - '0') * pow(2, S1.length() - 1 - i);
			}
			if(S2.length() > i){
				dec2 += (S2[i] - '0') * pow(2, S2.length() - 1 - i);
			}
		}
		
		// Highest common factor
		int hcf = 1;
		int large = max(dec1, dec2);
		int	small = min(dec1, dec2);
		while(1){
			int quotient = large / small;
			int remainder = large % small;
			
			if(remainder == 0){
				hcf = small;
				break;
			}
			else{
				large = small;
				small = remainder;
			}
		}
		
		// Output result
		if(hcf == 1){
			cout << "Love is not all you need!" << endl;
		}
		else{
			cout << "All you need is love!" << endl;
		}
	}
}