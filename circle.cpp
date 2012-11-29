#include "circle.h"
#include <string>

Circle::Circle(const Point& center, double radius) : _center(center), _radius(radius)
{
}

void Circle::display(std::ostream& out) const
{
	out << "Circle - center: ";
	_center.show(out);
	out << " radius: " << _radius;
}

double Circle::area() const
{
	return 3.14 * _radius * _radius;
}

void draw(const Circle& circle, std::ostream& out, size_t position)
{
	out << std::string(position, ' ');
	circle.display(out);
	out << std::endl;
}

double area(const Circle& circle)
{
	return circle.area();
}