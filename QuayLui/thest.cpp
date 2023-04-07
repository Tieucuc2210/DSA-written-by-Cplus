#include <iostream>
#include "Math.cpp"


int main() {
	cout << Math::abs(-2) << endl;
	cout << Math::add(2, 3) << endl;
	cout << Math::subtract(2, 3) << endl;
	cout << Math::min(2, 3) << endl;
	cout << Math::max(2, 3) << endl;
	cout << Math::pow(2, 3) << endl;
	return 0;
}