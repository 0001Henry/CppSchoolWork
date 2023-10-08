#include<iostream>
#include"CComplex.h"
using namespace std;

int main()
{
	CComplex z1, z2, zSum;

	//复数对象设置操作1
	z1.SetValue(1, 2);
	z2.SetValue(3, 4);

	zSum = z1.Add(z2);

	cout << "z1 = "; z1.ShowValue();
	cout << endl;
	cout << "z2 = "; z2.ShowValue();
	cout << endl;
	cout << "z1 + z2 = "; zSum.ShowValue();
	cout << endl;

	//复数对象设置操作2
	z1.SetValue();
	z2.SetValue();

	zSum = z1.Add(z2);

	cout << "z1 = "; z1.ShowValue();
	cout << endl;
	cout << "z2 = "; z2.ShowValue();
	cout << endl;
	cout << "z1 + z2 = "; zSum.ShowValue();
	cout << endl;


	return 0;
}