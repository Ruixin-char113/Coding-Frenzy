#include <iostream>
using namespace std;
int main(){
	int T;
	cin >> T;				//Data
	while(T){
		int N,P;
		cin >> N;			//Day
		cin >> P;			//Party
		int *hartal = new int[P];
		for(int i = 0; i < P; i++)
			cin >> hartal[i];
			
		int Ans = 0;	int* tempAns = new int[N];
		for (int i = 0; i < N; i++)
			tempAns[i] = 0;
		for(int i = 0; i < P; i++){
			int j = 0;
			int temp;
			do{
				j++;
				temp = j * hartal[i];
				if(temp > N)
					break;
				if (((temp - 6) % 7 != 0) && ((temp - 7) % 7 != 0))
					tempAns[temp-1] = 1;
			}while(1);
		}
		for(int i = 0; i < N; i++)
			if(tempAns[i] == 1)
				Ans++;
		delete[]hartal;
		delete[]tempAns;
		cout << Ans << endl;
		T--;
	}
}