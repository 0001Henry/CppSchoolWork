#include"CComplex.h"
#include<iostream>
using namespace std;

//�����������ò������� 1
void CComplex::SetValue(double zR, double zI)
{
	this->mR = zR;
	this->mI = zI;
}


//�����������ò������� 2
void CComplex::SetValue() 
{
	int input_R;
	int input_I;
	cout << "�����븴����ʵ����" << endl;
	cin >> input_R;;
	cout << "�����븴�����鲿��" << endl;
	cin >> input_I;
	this->mR = input_R;
	this->mI = input_I;
}


//����������ʾ��������
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

//�����ӷ����㹦�ܺ���
CComplex CComplex::Add(const CComplex& zC) const
{
	CComplex result;
	result.mR = this->mR + zC.mR;
	result.mI = this->mI + zC.mI;
	return result;
}
