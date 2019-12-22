/*
	Produced: 2/21/2019
	Author: Alec M.
	Website: https://github.com/amattu2
	Desc: Takes two numbers, and outputs basic information about them
*/

// Includes
#include <iostream>
#include <string>

// Namespaces
using namespace std;

// Output text
int output(string msg, bool newLine = true) {
	// Checks
	if (newLine == true) {
		cout << "--->> " + msg + "\n";
	} else {
		cout << "--->> " + msg;
	}

	return 1;
}

// Get input function
int getInput(string msg, bool allowZero = false) {
	// Goto Label
	get_input:

	// Variables
	int number;

	// Output Message
	output(msg, false);
	cin >> number;

	// Checks
	if (number == 0 && allowZero == false) {
		output("You may not enter a zero there", true);
		goto get_input;
	} else {
		return number;
	}
}

// Main function
int main() {
	// Variables
	int num1, num2;

	// Get Input
	num1 = getInput("Please enter a single digit: ", true);
	num2 = getInput("Please enter another single digit: ", false);

	// Output
	output("You entered " + to_string(num1) + " and " + to_string(num2));
	output("The result of dividing those two is: " + to_string(static_cast<float>((float)num1 / (float)num2)));
	output("The number " + to_string(num1) + " is " + (num1 % 2 == 0 ? "even" : "not even"));

	// Restart
	system("pause");
	system("cls");
	main();
	return 0;
}
