#pragma once
#include <iostream>
//��{�ƂȂ�}�`�N���X
class Figure
{
protected:
	float teihen, takasa, menseki;
public:
	void SetTeihen(float f);
	void SetTakasa(float f);
	void Disp();
};