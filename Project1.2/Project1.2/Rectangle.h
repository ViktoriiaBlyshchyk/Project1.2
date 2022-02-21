#pragma once

class Rectangle
{
private:
	float height, width;

public:
	float GetHeight() const { return height; }
	float GetWidth() const { return width; }
	void SetHeight(float value);
	void SetWidth(float value);

	bool Init(float x, float y);
	void Display() const;
	void Read();

	void Area();
	void Perimeter();

};
