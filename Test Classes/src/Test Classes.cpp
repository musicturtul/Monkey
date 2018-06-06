//============================================================================
// Name        : Test.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include "Monkey.h"
using namespace std;

int main() {
	Monkey monkey;

	cout << "Is the monkey happy?" << endl;

	string monkeyHappiness;
	cin >> monkeyHappiness;

	if (monkeyHappiness == "yes") {
		monkey.makeHappy();
	} else {
		monkey.makeSad();
	}
	cout << "Do you want the monkey to:" << endl;
	cout << "1. Eat a banana" << endl << "2. Climb a tree" << endl;

	int monkeyAction;
	cin >> monkeyAction;

	switch (monkeyAction) {
	case 1:
		monkey.eatBanana();
		break;
	case 2:
		monkey.climbTree();
		break;
	default:
		cout << "That is not a valid choice" << endl;
	}

	return 0;
}
