#pragma once

class CComplex
{
public:

	void SetValue(); //复数对象设置操作函数 1

	void SetValue(double zR, double zI); //复数对象设置操作函数 2

	void ShowValue(); //复数对象显示操作函数

	CComplex Add(const CComplex& zC) const; //复数加法运算功能函数

private:
	double mR;//实部
	double mI;//虚部

};