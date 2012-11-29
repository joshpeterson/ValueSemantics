#ifndef __HAS_AREA_DOCUMENT_H
#define __HAS_AREA_DOCUMENT_H

#include <vector>
#include <string>
#include <ostream>

#include "has_area_object.h"

typedef std::vector<has_area_object_t> has_area_document;

void draw(const has_area_document& x, std::ostream& out, size_t position)
{
    out << std::string(position, ' ') << "<has_area_document>" << std::endl;
    for (auto& e = x.begin(); e != x.end(); ++e)
	{
		out << std::string(2, ' ') << "Area: " << area(*e) << std::endl;
	}
    out << std::string(position, ' ') << "</has_area_document>" <<std:: endl;
}

double area(const has_area_document& x)
{
	double document_area = 0.;
	for (auto& e = x.begin(); e != x.end(); ++e)
	{
		document_area += area(*e);
	}

	return document_area;
}

#endif // __HAS_AREA_DOCUMENT_H
