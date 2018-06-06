#include <iostream>
#include "Monkey.h"

using namespace std;

void Monkey::climbTree(){
	if (happy){
		cout << "I'm love climbing trees!" << endl;
	} else {
		cout << "This tree is a tree of misery" << endl;
	}
}
void Monkey::eatBanana() {
	if(happy) {
		cout << "This banana is delicious!" << endl;
	} else {
		cout << "I wish this banana tasted better" << endl;
	}
}
void Monkey::makeHappy(){
	happy = true;
}
void Monkey::makeSad() {
	happy = false;
}
