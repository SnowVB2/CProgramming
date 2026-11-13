#include "Point.hpp"
#include <iostream>
int main(void) {
Point p1(2, 3, "p1");
++p1;
std::cout << p1 << std::endl;
Point p2(0, 0, "");
std::cin >> p2;
std::cout << p2;
return 0;
}