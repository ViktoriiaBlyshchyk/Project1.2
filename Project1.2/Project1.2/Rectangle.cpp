#include "Rectangle.h"
#include <iostream>

using namespace std;

void Rectangle::SetHeight(float value)
{
	height = value;
}

void Rectangle::SetWidth(float value)
{
	width = value;
}

bool Rectangle::Init(float x, float y)
{
	if (x > 0 && y > 0)
	{
		height = x;
		width = y;
		return true;
	}
	else
	{
		return false;
	}
}

void Rectangle::Display() const
{
	cout << endl;
	cout << "height = " << height << endl;
	cout << "width = " << width << endl;
}

void Rectangle::Read()
{
	float x, y;
	do
	{
		cout << "Input complex value: " << endl;
		cout << "height = "; cin >> x;
		cout << "width = "; cin >> y;
	} while (!Init(x, y));
}

void Rectangle::Area()
{
	double a;
	a = height * width;
	cout << "a = " << a << endl;
}

void Rectangle::Perimeter()
{
	double p;
	p = 2 * (height + width);
	cout << "p = " << p << endl;
}
