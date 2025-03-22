#include <iostream>
#include <string>
using namespace std;
int main() {
	string input;

	while (cin >> input) {
		bool palindrome = 1;
		bool mirrored = 1;
		for (int i = 0, j = input.length() - 1;
			i < j;
			i++, j--) {
			if (!(palindrome || mirrored))
				break;
			if (input[i] != input[j]) {
				palindrome = 0;
			}
			switch (input[i]) {
			case 'A':
				if (input[j] != 'A')
					mirrored = 0;
				break;
			case 'E':
				if (input[j] != '3')
					mirrored = 0;
				break;
			case 'H':
				if (input[j] != 'H')
					mirrored = 0;
				break;
			case 'I':
				if (input[j] != 'I')
					mirrored = 0;
				break;
			case 'J':
				if (input[j] != 'L')
					mirrored = 0;
				break;
			case 'L':
				if (input[j] != 'J')
					mirrored = 0;
				break;
			case 'M':
				if (input[j] != 'M')
					mirrored = 0;
				break;
			case 'O':
				if (input[j] != 'O')
					mirrored = 0;
				break;
			case 'S':
				if (input[j] != '2')
					mirrored = 0;
				break;
			case 'T':
				if (input[j] != 'T')
					mirrored = 0;
				break;
			case 'U':
				if (input[j] != 'U')
					mirrored = 0;
				break;
			case 'V':
				if (input[j] != 'V')
					mirrored = 0;
				break;
			case 'W':
				if (input[j] != 'W')
					mirrored = 0;
				break;
			case 'X':
				if (input[j] != 'X')
					mirrored = 0;
				break;
			case 'Y':
				if (input[j] != 'Y')
					mirrored = 0;
				break;
			case 'Z':
				if (input[j] != '5')
					mirrored = 0;
				break;
			case '1':
				if (input[j] != '1')
					mirrored = 0;
				break;
			case '2':
				if (input[j] != 'S')
					mirrored = 0;
				break;
			case '3':
				if (input[j] != 'E')
					mirrored = 0;
				break;
			case '5':
				if (input[j] != 'Z')
					mirrored = 0;
				break;
			case '8':
				if (input[j] != '8')
					mirrored = 0;
				break;
			default:
				mirrored = 0;
				break;
			}
		}
		if (palindrome)
			if (mirrored)
				cout << input << " -- is a mirrored palindrome." << endl;
			else
				cout << input << " -- is a regular palindrome." << endl;
		else
			if (mirrored)
				cout << input << " -- is a mirrored string." << endl;
			else
				cout << input << " -- is not a palindrome." << endl;
		cout << endl;
	}
}