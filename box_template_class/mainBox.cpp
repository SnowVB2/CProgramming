#include <iostream>
#include <string>
#include "Box.tpp"

int main(void) {

    //create an object of template Box class
    Box <double> box(2.5);
    Box <std::string> box_game("GTA VI");

    std::cout << box.getValue() << std::endl;
    std::cout << box_game.getValue() << std::endl;

    return 0;
}