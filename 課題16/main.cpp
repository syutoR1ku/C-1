#include "Square.h"
#include "Triangle.h"
int main()
{
	Square s;
	Triangle t;
	//�l�p�`
	s.SetTeihen(10.0f);
	s.SetTakasa(5.5f);
	s.Calc();
	s.Disp();
	//�O�p�`
	t.SetTeihen(10.0f);
	t.SetTakasa(5.5f);
	t.Calc();
	t.Disp();
}