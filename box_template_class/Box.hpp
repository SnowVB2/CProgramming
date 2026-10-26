#ifndef BOX_HPP
#define BOX_HPP

//template class
template <typename T>
class Box {
public:
    //can only initialize property with value like this with the colon in the constructor
    Box(const T& v);


    //accessors
    //set
    void setValue(const T& setV);

    //get
    const T& getValue() const;



private:
    T value;
    
};

#include "Box.tpp"
#endif