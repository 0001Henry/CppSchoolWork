#pragma once

class CComplex
{
public:

	void SetValue(); //�����������ò������� 1

	void SetValue(double zR, double zI); //�����������ò������� 2

	void ShowValue(); //����������ʾ��������

	CComplex Add(const CComplex& zC) const; //�����ӷ����㹦�ܺ���

private:
	double mR;//ʵ��
	double mI;//�鲿

};