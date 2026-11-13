#ifndef POINT_HPP
#define POINT_HPP
#include <string>
class Point {
public:
Point(int x = 0, int y = 0, const std::string& tag = "");
std::string toString() const;
// TODO
// ~Point();
// Point(const Point& other);
// Point& operator=(const Point& other);
// Logical operators
bool operator==(const Point& other);
bool operator!=(const Point& other);
// Arithmetic operators
Point operator+(const Point& other);
Point operator*(const Point& other); // TODO
// Arithmetic assignment operator
Point& operator+=(const Point& other);
Point& operator*=(const Point& other); // TODO
// Preincrement operator
Point& operator++();
// Postincrement operator
Point operator++(int);
// TODO Predecrement operator
Point& operator--();
// TODO Postdecrement operator
Point operator--(int);
// Subscript operator
int& operator[](int index);
private:
friend std::ostream& operator<<(std::ostream& out, const Point& point);
friend std::istream& operator>>(std::istream& in, Point& point);
int x, y;
char* tag;
};
#endif