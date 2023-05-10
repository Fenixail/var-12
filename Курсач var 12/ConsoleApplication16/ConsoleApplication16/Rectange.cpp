#include "Rectange.h"
#include "Figure.h"

using namespace std;

void Rectange::Create()
{
	setlocale(LC_ALL, "rus");
	cout << "Введите координату 1-ой точки" << endl; 
	cin >> x1;
	cout << "Введите координату 2-ой точки" << endl;
	cin >> y1;
	cout << "Введите координату 3-ей точки" << endl;
	cin >> x2;
	cout << "Введите координату 4-ей точки" << endl;
	cin >> y2;
	cout << "Введите точку t для вычисления площади треугольника" << endl;
	cin >> t;
	cout << "Введите точку h для вычисления площади треугольника" << endl;
	cin >> h;
	cout << "Вы ввели следующие координаты Rectange:" << endl;
	cout << " A:" << "(" << x1 << "," << y1 << ")" << endl;
	cout << " B:" << "(" << x2 << "," << y1 << ")" << endl;
	cout << " C:" << "(" << x1 << "," << y2 << ")" << endl;
}

void Rectange::Deleted()
{
	setlocale(LC_ALL, "rus");
	cout << "Треугольник удалён" << endl;
}

void Rectange::Show()
{
	setlocale(LC_ALL, "rus");
	cout << "Вы ввели следующие координаты Rectange:" << endl;
	cout << " A:" << "(" << x1 << "," << y1 << ")" << endl;
	cout << " B:" << "(" << x2 << "," << y1 << ")" << endl;
	cout << " C:" << "(" << x1 << "," << y2 << ")" << endl;
}

void Rectange::Verification()
{
	setlocale(LC_ALL, "rus");
	cout << "Треугольник Существует" << endl;
}

int Rectange::Compare()
{
	setlocale(LC_ALL, "rus");
	int w;
	w = t * h;
	cout << "Площадь треугольника= " << w << endl;
	return w;
}
