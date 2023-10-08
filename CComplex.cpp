#include"CComplex.h"
#include<iostream>
using namespace std;

//复数对象设置操作函数 1
void CComplex::SetValue(double zR, double zI)
{
	this->mR = zR;
	this->mI = zI;
}


//复数对象设置操作函数 2
void CComplex::SetValue() 
{
	int input_R;
	int input_I;
	cout << "请输入复数的实部：" << endl;
	cin >> input_R;;
	cout << "请输入复数的虚部：" << endl;
	cin >> input_I;
	this->mR = input_R;
	this->mI = input_I;
}


//复数对象显示操作函数
void CComplex::ShowValue()
{
	if (this->mR != 0 && this->mI != 0) {
		if (this->mI >= 0) {
			cout << this->mR << "+" << this->mI << "i" ;
		}
		else {
			cout << this->mR << this->mI << "i" ;
		}
	}

	else if (this->mR == 0 && this->mI != 0)
		cout << this->mI << "i" ;
	else if (this->mR != 0 && this->mI == 0)
		cout << this->mR ;
	else
		cout << "0" ;
}

//复数加法运算功能函数
CComplex CComplex::Add(const CComplex& zC) const
{
	CComplex result;
	result.mR = this->mR + zC.mR;
	result.mI = this->mI + zC.mI;
	return result;
}
