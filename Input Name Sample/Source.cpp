#include <iostream>
#include <string>

using namespace std;

// Get User Name
string getName() {
	string name;

	cin >> name;

	return name;
}

// Output Text
int output(string str, bool newline = true) {
	if (newline)
		cout << str << "\n";
	else
		cout << str;

	return 1;
}

// Main Function
int main() {
	// Variables
	string name;

	output("Please enter your name: ", false);
	name = getName();
	output("Your name is: " + name);

	// Freeze UI
	system("pause");
	return 0;
}
