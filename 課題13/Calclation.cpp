#include <iostream>
#include "Calclation.h"

using namespace std;

// メンバ関数の定義
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