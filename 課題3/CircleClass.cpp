#include<iostream>
#include"CircleClass.h"

void CircleClass::Input() 
{
	std::cout << "���a�́H";
	std::cin >> r;
}

void CircleClass::Calc()
{
	area = r * r * 3.14f;
}

void CircleClass::Disp()
{
	std::cout << "�~�̖ʐρ�" << area << "\n";
}