#include "Rectange.h"
#include "Figure.h"

using namespace std;

void Rectange::Create()
{
	setlocale(LC_ALL, "rus");
	cout << "������� ���������� 1-�� �����" << endl; 
	cin >> x1;
	cout << "������� ���������� 2-�� �����" << endl;
	cin >> y1;
	cout << "������� ���������� 3-�� �����" << endl;
	cin >> x2;
	cout << "������� ���������� 4-�� �����" << endl;
	cin >> y2;
	cout << "������� ����� t ��� ���������� ������� ������������" << endl;
	cin >> t;
	cout << "������� ����� h ��� ���������� ������� ������������" << endl;
	cin >> h;
	cout << "�� ����� ��������� ���������� Rectange:" << endl;
	cout << " A:" << "(" << x1 << "," << y1 << ")" << endl;
	cout << " B:" << "(" << x2 << "," << y1 << ")" << endl;
	cout << " C:" << "(" << x1 << "," << y2 << ")" << endl;
}

void Rectange::Deleted()
{
	setlocale(LC_ALL, "rus");
	cout << "����������� �����" << endl;
}

void Rectange::Show()
{
	setlocale(LC_ALL, "rus");
	cout << "�� ����� ��������� ���������� Rectange:" << endl;
	cout << " A:" << "(" << x1 << "," << y1 << ")" << endl;
	cout << " B:" << "(" << x2 << "," << y1 << ")" << endl;
	cout << " C:" << "(" << x1 << "," << y2 << ")" << endl;
}

void Rectange::Verification()
{
	setlocale(LC_ALL, "rus");
	cout << "����������� ����������" << endl;
}

int Rectange::Compare()
{
	setlocale(LC_ALL, "rus");
	int w;
	w = t * h;
	cout << "������� ������������= " << w << endl;
	return w;
}
