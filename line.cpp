#include "line.h"
#include <string>
#include <ostream>

Line::Line(const Point& point1, const Point& point2) : _point1(point1), _point2(point2)
{
}

void Line::write(std::ostream& out) const
{
	out << "Line - from: ";
	_point1.show(out);
	out << " to: ";
	_point2.show(out);
}

void draw(const Line& line, std::ostream& out, size_t position)
{
	out << std::string(position, ' ');
	line.write(out);
	out << std::endl;
}