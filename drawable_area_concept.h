#ifndef __DRAWABLE_AREA_CONCEPT_H
#define __DRAWABLE_AREA_CONCEPT_H

struct drawable_area_concept_t {
	virtual ~drawable_area_concept_t() {};
    virtual drawable_area_concept_t* copy_() = 0;
    virtual void draw_(std::ostream&, size_t) const = 0;
    virtual double area_() const = 0;
};

#endif // __DRAWABLE_AREA_CONCEPT_H