#include "point.h"
#include <string>
#include <ostream>

Point::Point(double x, double y, double z) : _location(3)
{
	_location[0] = x;
	_location[1] = y;
	_location[2] = z;
}

void Point::show(std::ostream& out) const
{
	out << "Point - (" << _location[0] << "," << _location[1] << "," << _location[2] << ")";
}

void draw(const Point& point, std::ostream& out, size_t position)
{
	out << std::string(position, ' ');
	point.show(out);
	out << std::endl;
}
