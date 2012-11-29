#ifndef __CIRCLE_H
#define __CIRCLE_H

#include <ostream>
#include "point.h"

class Circle
{
public:
	Circle(const Point& center, double radius);
	void display(std::ostream& out) const;
	double area() const;

private:
	Point _center;
	double _radius;
};

void draw(const Circle& circle, std::ostream& out, size_t position);
double area(const Circle& circle);

#endif // __CIRCLE_H