#include "UHash.h"

using namespace std;

int main() {
	int input;
	UHash table;
	do {
		cout << "Input a 5 digit int to put in the table(0 to exit): ";
		cin >> input;
		if (input !=0)
			table.add_int(input);
	} while (input != 0);
	table.display();
}