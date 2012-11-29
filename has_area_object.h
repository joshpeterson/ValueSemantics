#ifndef __HAS_AREA_OBJECT_H
#define __HAS_AREA_OBJECT_H

#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

#include "has_area_concept.h"

class has_area_object_t {
  public:
    template <typename T>
    has_area_object_t(const T& x) : object_(new model<T>(x)) {}
    has_area_object_t(const has_area_object_t& x) : object_(x.object_->copy_()) {}
    has_area_object_t(has_area_object_t&& x) : object_(std::move(x.object_)) {}

    has_area_object_t& operator=(has_area_object_t x)
    { object_ = std::move(x.object_); return *this; }
    
    friend double area(const has_area_object_t& x)
    { return x.object_->area_(); }
    
  private:
	template <typename T>
	struct model : has_area_concept_t
	{
		model(const T& x) : data_(x) {}
		has_area_concept_t* copy_() { return new model(*this); }
		double area_() const { return area(data_); }
        
		T data_;
	};

	std::unique_ptr<has_area_concept_t> object_;
};

#endif // __HAS_AREA_OBJECT_H
