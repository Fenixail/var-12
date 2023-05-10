#pragma once
#include <iostream>
#include <cmath>
#include "Figure.h"

class Rectange : public Figure
{
private:
	double x1, x2, y1, y2, dlinaR, dx, dy, r, t, h;
public:
	// ����������� � 5 �����������
	Rectange(double a, double b, double c, double d, double r, double o, double l) : x1(a), x2(b), y1(c), y2(d), dlinaR(r), t(o), h(l) {	}
	// ����������� �� ���������
	Rectange() : x1(0), x2(0), y1(0), y2(0) {	}
	~Rectange() { } // ����������
	void Create(); // ����� �������� ������
	void Deleted(); // ����� �������� ������
	void Show(); // ����� ����������� ������
	void Verification(); // �������� ������������� ������
	int Compare(); // ������� ������
};
