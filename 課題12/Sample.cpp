
#include <iostream>
#include "Sample.h" 

void SampleClass::Input() {
	a = 10;
	b = 3;
}

void SampleClass::Plus() {
	c = a + b;
}

void SampleClass::Disp() {
	std::cout << "変数Ｃの値は" << c << "\n";
};