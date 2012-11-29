#ifndef __DRAWABLE_CONCEPT_H
#define __DRAWABLE_CONCEPT_H

struct drawable_concept_t {
	virtual ~drawable_concept_t() {};
    virtual drawable_concept_t* copy_() = 0;
    virtual void draw_(std::ostream&, size_t) const = 0;
};

#endif // __DRAWABLE_CONCEPT_H