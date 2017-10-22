#ifndef UHash_H

#include <iostream>
#include <cstdlib>
#include <vector>
#include <list>

using namespace std;

//for the simplicity's sake, this universal hash will only have 13 slots in the array and only take 5-digit integers

class UHash {
public:
	UHash();
	void add_int(int input);
	void display();
private:
	vector<int> random_elements;
	list<int> table[13];

};
#endif // !UHash_H
