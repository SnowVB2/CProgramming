#include <iostream>
#include <string>
#include "Box.hpp"


// constructor
template <typename T>
Box<T>::Box(const T& v) : value(v) {

    }

// accessors
// set
template <typename T>
const T& Box<T>::getValue() const {
    return value;
}
// get
template <typename T>
void Box<T>::setValue(const T& setV) {
        value = setV;
    }







