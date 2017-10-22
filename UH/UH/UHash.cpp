#include "UHash.h"

//we will create 5 random digits here(as mentioned, this hash table will only take ints with 5 digits for the simplicity's sake)
UHash::UHash() {
	int nequal_elements;
	int random_element;
	while (random_elements.size() < 5) {
		nequal_elements = 0;
		random_element = rand() % 13;

		for (int i : random_elements) {
			if (random_element != i)
				nequal_elements++;
		}
		if (nequal_elements == random_elements.size())
			random_elements.push_back(random_element);
	}

	cout << "The random elements are ";
	for (int x : random_elements) {
		cout << "  "<< x;
	}
	cout << endl;
}

void UHash::add_int(int input) {
	//assuming that the input is a 5 digit int
	int sum=0;
	int input_copy = input;
	for (int a : random_elements) {
		sum += a * (input % 10);
		input /= 10;
	}
	int hash_index = sum % 13;
	cout << "The index is " << hash_index << endl;

	table[hash_index].push_back(input_copy);
}

void UHash::display() {
	for (int i = 0; i < 13; i ++){
		cout << "Index: " << i<< "  Elements:      ";
		for (int element : table[i]) {
			cout << element << "    ";
		}
		cout << endl;
	}
}