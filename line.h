#ifndef __LINE_H
#define __LINE_H

#include <vector>
#include <ostream>

#include "point.h"

class Line
{
public:
	Line(const Point& point1, const Point& point2);
	void write(std::ostream& out) const;

private:
	Point _point1;
	Point _point2;
};

void draw(const Line& line, std::ostream& out, size_t position);

#endif // __LINE_H
