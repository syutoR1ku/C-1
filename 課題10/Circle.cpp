#include "Circle.h"
//�R���X�g���N�^
Circle::Circle(void)
{
	PI = 3.141592;
}
//�~�̖ʐς����߂�֐�
//�����F���a
//�ߒl�F�ʐ�
float Circle::Menseki(float r)
{
	return r * r * PI;
}