#include "stdafx.h"
#include <iostream>
#include <math.h>
using namespace std;

int main() {
	double E = 1e-6, Sum = 0, val_now, sign;
 	int k = 0;

	do {
		k++;
		val_now = (double)k / pow(k + 2, 2);
		sign = pow(-1, k);
		Sum += val_now*sign;

	} while (val_now >= E);
	cout <<"Значение суммы ряда чисел" << Sum << endl;
	system("pause");
}
