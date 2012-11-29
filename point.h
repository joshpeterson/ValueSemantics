#ifndef __POINT_H
#define __POINT_H

#include <vector>
#include <ostream>

class Point
{
public:
	Point(double x, double y, double z);
	void show(std::ostream& out) const;

private:
	std::vector<double> _location;
};

void draw(const Point& point, std::ostream& out, size_t position);

#endif // __POINT_H
