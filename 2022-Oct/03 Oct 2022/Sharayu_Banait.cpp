// CPP program to Convert characters
// of a string to opposite case
#include <iostream>
using namespace std;

// Function to convert characters
// of a string to opposite case
void convertOpposite(string& str)
{
	int ln = str.length();

	// Conversion according to ASCII values
	for (int i = 0; i < ln; i++) {
		if (str[i] >= 'a' && str[i] <= 'z')
			// Convert lowercase to uppercase
			str[i] = str[i] - 32;
		else if (str[i] >= 'A' && str[i] <= 'Z')
			// Convert uppercase to lowercase
			str[i] = str[i] + 32;
	}
}

// Driver function
int main()
{
	string str = "tEsT";

	// Calling the Function
	convertOpposite(str);

	cout << str;
	return 0;
}

