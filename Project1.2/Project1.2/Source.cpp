#include <iostream>
#include "Rectangle.h"

using namespace std;

Rectangle makeRectangle(float x, float y)
{
	Rectangle r;
	if (!r.Init(x, y))
		cout << "Wrong length parametrs" << endl;
	return r;
}

int main()
{
	Rectangle r1, r2, r;

	cout << "Rectangle1" << endl;
	r1.Read();
	r1.Display();
	r1.Area();
	r1.Perimeter();

	cout << endl;
	cout << "Rectangle2" << endl;
	r2.SetHeight(2);
	r2.SetWidth(3);

	r2.GetHeight();
	r2.GetWidth();
	r2.Area();
	r2.Perimeter();

	cout << endl;
	cout << "Rectangle3" << endl;
	float x, y;
	cout << "height = "; cin >> x;
	cout << "width = "; cin >> y;
	r = makeRectangle(x, y);
	r.Display();
	r.Area();
	r.Perimeter();

	return 0;
}
