#include<iostream>
#include "Sample.h"

void SampleClass::Input() {
	a = 10;
	b = 3;
}

void SampleClass::Plus() {
	c = a + b;

}

void SampleClass::Disp() {
	std::cout << "�ϐ�C�̒l��" << c << "\n";
}