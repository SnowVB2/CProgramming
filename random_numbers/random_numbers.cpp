#include <iostream>
#include <random>

int main(void) {
    //create random device for seed
    std::random_device rd;

    std::mt19937 eng(rd()); //generates sequence of pseudo random numbers


    std::uniform_int_distribution<int> dist;
    
    for (i = 0, i = 9, i++);
        std::cout << dist(eng) << std::endl;

        
}