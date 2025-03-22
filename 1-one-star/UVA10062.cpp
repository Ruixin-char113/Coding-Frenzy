#include <iostream>
#include <string>
using namespace std;

int main(){
	string input;
	bool isFirsttime = true;
	while(getline(cin, input)){
		// Is not first-time: output endl
		if(!isFirsttime)
			cout << endl;
		else
			isFirsttime = false;
		
		// Input string, record maxFreq
		int freq[256] = { 0 };
		int maxFreq = 0;
		for(int i = 0; i < input.length(); i++){
			freq[input[i]]++;
			if(freq[input[i]] > maxFreq)
				maxFreq = freq[input[i]];
		}
		
		// From 1 to maxFreq
		for(int i = 1; i <= maxFreq; i++){
			// From highest ASCII value to lowest ones
			for(int j = 255; j >= 0; j--){
				if(freq[j] && freq[j] == i)
					cout << j << ' ' << freq[j] << endl;
			}
		}
		
		
	}
}
// ================
// | Old version  |
// ================
// #include <iostream>
// #include <string>
// using namespace std;
// int main(){
// 	string input;
// 	int Max=0;
// 	int output[97*2];
// 										//preset
// 	for(int i=32,j=0; i < 129; i++,j+=2){
// 		output[j]=i;
// 		output[j+1]=Max;
// 	}
	
// 	bool firstFlag = 1;
// 	while(getline(cin, input)){				    		//input
// 		if(!firstFlag)
// 			cout << endl;
// 		else
// 			firstFlag = 0;
// 										//count
// 		for(int i=0; i<input.length(); i++){
// 			if(32<=input[i]&&input[i]<=128){
// 				output[(input[i]-32)*2+1]++;
// 				if(output[(input[i]-32)*2+1]>Max)
// 					Max = output[(input[i]-32)*2+1];
// 			}
// 		}
		
// 		for(int i=1; i<=Max; i++)
// 			for(int j=193; 0<=j; j-=2)
// 				if(output[j] == i){
// 					cout << output[j-1] << ' '		//output
// 						 << output[j] << endl;
// 					output[j] = 0;				//reset
// 				}
// 	}
// }
