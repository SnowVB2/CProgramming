#include "Point.hpp"
#include <cstring>
#include <iostream>
Point::Point(int x, int y, const std::string& tag) : x(x), y(y) {
this->tag = new char[tag.size() + 1];
strcpy(this->tag, tag.c_str());
}
std::string Point::toString() const {
return std::string(tag) + " :-(" + std::to_string(x) + ", " + std::to_string(y)
+ ")";
}
bool Point::operator==(const Point& other) {
return x == other.x && y == other.y;
}
bool Point::operator!=(const Point& other) {
//return x != other.x || y != other.y;
return !(*this == other);
}
int& Point::operator[](int index) {
if (index == 0) {
return x;
}
else {
return y;
}
}
Point Point::operator+(const Point& other) {
return Point(x + other.x, y + other.y, tag);
}
Point& Point::operator++() {
x += 1;
y += 1;
return *this;
}
Point Point::operator++(int ) {
// Create the copy of the current point
Point tmp(*this);
x += 1;
y += 1;
return tmp;
}
Point& Point::operator+=(const Point& other) {
x += other.x;
y += other.y;
// *this = *this + other;
return *this;
}
std::ostream& operator<<(std::ostream& out, const Point& point) {
//out << point.toString() << std::endl;
out << "x: " << point.x << std::endl;
out << "y: " << point.y << std::endl;
out << "tag: " << point.tag << std::endl;
return out;
}
std::istream& operator>>(std::istream& in, Point& point) {
std::cout << "Enter x, y and tag for the point: ";
std::string tmp;
in >> point.x >> point.y >> tmp;
// Free the memory
delete [] point.tag;
// Allocate new memory
point.tag = new char[tmp.size() + 1];
strcpy(point.tag, tmp.c_str());
return in;
}