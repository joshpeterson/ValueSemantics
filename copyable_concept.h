#ifndef __COPYABLE_CONCEPT_H
#define __COPYABLE_CONCEPT_H

template <typename T>
struct copyable_concept_t {
	virtual ~copyable_concept_t() {};
    virtual T* copy_() = 0;
};

#endif // __COPYABLE_CONCEPT_H