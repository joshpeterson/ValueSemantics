#include "drawable_document.h"
#include "has_area_document.h"
#include "drawable_area_document.h"
#include "point.h"
#include "line.h"
#include "circle.h"
#include "rectangle.h"

int main()
{
    drawable_document shapes;
	shapes.push_back(Point(1,1,1));
	shapes.push_back(Line(Point(1,0,0), Point(0,1,0)));
	shapes.push_back(Circle(Point(0,0,0), 2));
	shapes.push_back(Rectangle(3, 2));

	draw(shapes, std::cout, 0);

	has_area_document shapes_with_area;
	shapes_with_area.push_back(Rectangle(2, 4));
	shapes_with_area.push_back(Circle(Point(0,0,0), 3));

	shapes_with_area.push_back(shapes_with_area);

	draw(shapes_with_area, std::cout, 0);

	drawable_area_document drawable_shapes_with_area;
	drawable_shapes_with_area.push_back(Rectangle(2, 4));
	drawable_shapes_with_area.push_back(Circle(Point(0,0,0), 3));

	drawable_shapes_with_area.push_back(drawable_shapes_with_area);

	draw(drawable_shapes_with_area, std::cout, 0);
}