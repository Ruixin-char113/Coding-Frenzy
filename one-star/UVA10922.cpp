#include <iostream>
using namespace std;

// Store number, flag
struct number{
	string n;
	bool multipleNine = false;
};

number isMultipleNine(number input){
	int count = 0;
	
	// Sum digits
	for(int i = 0; i < input.n.length(); i++){
		count += input.n[i] - '0';
	}
	
	// Store new number
	number output;
	output.n = to_string(count);
	
	// Set flag
	if(!(count % 9))
		output.multipleNine = true;
	else
		output.multipleNine = false;
	
	return output;
}

int main(){
	number input;
	
	while(cin >> input.n && input.n != "0"){
		cout << input.n;
		
		// Count 9-Degree
		int nineDegree = 0;
		while(1){
			// Catch new input
			input = isMultipleNine(input);
			
			if(input.multipleNine){
				nineDegree++;
				if(input.n.length() == 1)
					break;
				continue;
			}
			else{
				break;
			}
		}
		
		// Output
		if(nineDegree){
			cout << " is a multiple of 9 and has 9-degree " << nineDegree << ".\n";
		}
		else{
			cout << " is not a multiple of 9.\n";
		}
	}
}
