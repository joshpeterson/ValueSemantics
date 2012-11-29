#ifndef __RECTANGLE_H
#define __RECTANGLE_H

#include <ostream>

class Rectangle
{
public:
	Rectangle(double length, double width);
	void display(std::ostream& out) const;
	double area() const;

private:
	double _length;
	double _width;
};

void draw(const Rectangle& rectangle, std::ostream& out, size_t position);
double area(const Rectangle& rectangle);

#endif // __RECTANGLE_H