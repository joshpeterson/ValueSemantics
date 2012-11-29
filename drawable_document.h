#ifndef __DOCUMENT_H
#define __DOCUMENT_H

#include <vector>
#include <string>
#include <ostream>

#include "drawable_object.h"

typedef std::vector<drawable_object_t> drawable_document;

void draw(const drawable_document& x, std::ostream& out, size_t position)
{
    out << std::string(position, ' ') << "<drawble_document>" << std::endl;
    for (auto& e = x.begin(); e != x.end(); ++e)
		draw(*e, out, position + 2);
    out << std::string(position, ' ') << "</drawable_document>" <<std:: endl;
}

#endif // __DOCUMENT_H
