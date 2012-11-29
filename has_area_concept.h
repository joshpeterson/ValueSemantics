#ifndef __HAS_AREA_CONCEPT_H
#define __HAS_AREA_CONCEPT_H

struct has_area_concept_t {
	virtual ~has_area_concept_t() {};
    virtual has_area_concept_t* copy_() = 0;
    virtual double area_() const = 0;
};

#endif // __HAS_AREA_CONCEPT_H