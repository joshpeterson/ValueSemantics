#ifndef __DRAWABLE_AREA_DOCUMENT_H
#define __DRAWABLE_AREA_DOCUMENT_H

#include <vector>
#include <string>
#include <ostream>

#include "drawable_area_object.h"

typedef std::vector<drawable_area_object_t> drawable_area_document;

void draw(const drawable_area_document& x, std::ostream& out, size_t position)
{
    out << std::string(position, ' ') << "<drawable_area_document>" << std::endl;
    for (auto& e = x.begin(); e != x.end(); ++e)
	{
		draw(*e, out, position + 2);
		out << std::string(position + 2, ' ') << "Area: " << area(*e) << std::endl;
	}
    out << std::string(position, ' ') << "</drawable_area_document>" <<std:: endl;
}

double area(const drawable_area_document& x)
{
	double document_area = 0.;
	for (auto& e = x.begin(); e != x.end(); ++e)
	{
		document_area += area(*e);
	}

	return document_area;
}

#endif // __DRAWABLE_AREA_DOCUMENT_H
