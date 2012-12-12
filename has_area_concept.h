#ifndef __HAS_AREA_CONCEPT_H
#define __HAS_AREA_CONCEPT_H

#include "copyable_concept.h"

struct has_area_concept_t : public copyable_concept_t<has_area_concept_t> {
	virtual ~has_area_concept_t() {};
    virtual double area_() const = 0;
};

#endif // __HAS_AREA_CONCEPT_H