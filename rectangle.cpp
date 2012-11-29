#include "rectangle.h"
#include <string>

Rectangle::Rectangle(double length, double width) : _length(length), _width(width)
{
}

void Rectangle::display(std::ostream& out) const
{
	out << "Rectangle - length: " << _length << " width: " << _width;
}

double Rectangle::area() const
{
	return _length * _width;
}

void draw(const Rectangle& rectangle, std::ostream& out, size_t position)
{
	out << std::string(position, ' ');
	rectangle.display(out);
	out << std::endl;
}

double area(const Rectangle& rectangle)
{
	return rectangle.area();
}