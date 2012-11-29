#ifndef __DRAWABLE_AREA_OBJECT_H
#define __DRAWABLE_AREA_OBJECT_H

#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

#include "drawable_area_concept.h"

class drawable_area_object_t {
  public:
    template <typename T>
    drawable_area_object_t(const T& x) : object_(new model<T>(x)) {}
    drawable_area_object_t(const drawable_area_object_t& x) : object_(x.object_->copy_()) {}
    drawable_area_object_t(drawable_area_object_t&& x) : object_(std::move(x.object_)) {}

    drawable_area_object_t& operator=(drawable_area_object_t x)
    { object_ = std::move(x.object_); return *this; }
    
    friend void draw(const drawable_area_object_t& x, std::ostream& out, size_t position)
    { x.object_->draw_(out, position); }

	friend double area(const drawable_area_object_t& x)
    { return x.object_->area_(); }
    
  private:
	template <typename T>
	struct model : drawable_area_concept_t
	{
		model(const T& x) : data_(x) {}
		drawable_area_concept_t* copy_() { return new model(*this); }

		void draw_(std::ostream& out, size_t position) const 
		{ draw(data_, out, position); }

		double area_() const 
		{ return area(data_); }
        
		T data_;
	};

	std::unique_ptr<drawable_area_concept_t> object_;
};

#endif // __DRAWABLE_AREA_OBJECT_H
