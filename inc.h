#pragma once

class Counter {
private:
	int number;
public:
	Counter(int number);
	int inc();
	int dec();
	int cur();
};