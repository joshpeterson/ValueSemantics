#ifndef __DRAWABLE_AREA_CONCEPT_H
#define __DRAWABLE_AREA_CONCEPT_H

#include "copyable_concept.h"

struct drawable_area_concept_t : public copyable_concept_t<drawable_area_concept_t> {
	virtual ~drawable_area_concept_t() {};
    virtual void draw_(std::ostream&, size_t) const = 0;
    virtual double area_() const = 0;
};

#endif // __DRAWABLE_AREA_CONCEPT_H