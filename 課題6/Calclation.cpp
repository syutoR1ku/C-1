#include <iostream>
#include "Calclation.h"

using namespace std;

// �����o�֐��̒�`
void Calclation::SetA(float value) {
    a = value;
}

void Calclation::SetB(float value) {
    b = value;
}

void Calclation::Disp() const {
    cout << a << " + " << b << " = " << a + b << endl;
    cout << a << " - " << b << " = " << a - b << endl;
}