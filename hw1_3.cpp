//Mushfiqur Rahman


#include <iostream>
using namespace std;
int main() {
	int integer=0;
	cout << "Enter a positive integer: ";
	cin >>integer;
	if (integer <= 0) {
		cout << "Invalid input." << endl;
		return 0;
	}

	int numDigits = 0;
	int sumDigits = 0;
	int evenDigits = 0;

	while (integer > 0) {
		int lastDigit = integer % 10;
		numDigits++;
		sumDigits += lastDigit;

		if (lastDigit % 2 == 0) {
			evenDigits++;
		}
		integer = integer / 10;
	}

	cout << "Number of digits: " << numDigits << endl;
	cout << "Sum of digits: " << sumDigits << endl;
	cout << "Number of even digits: " << evenDigits << endl;

	return 0;

}