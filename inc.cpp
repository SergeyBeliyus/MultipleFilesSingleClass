#include "inc.h"


Counter::Counter(int number) {
	this->number = number;
};

int Counter::inc() {
	return ++number;
};

int Counter::dec() {
	return --number;
};

int Counter::cur() {
	return number;
};

