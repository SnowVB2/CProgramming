#include <iostream>
#include <string>
#include <vector>

//template
template <typename T>
T smallest(const T& v1, const T& v2, const T& v3) {
    if (v1 <= v2 && v1 <= v3) {
        return v1;
    } else if (v1 <= v3) {
        return v2;
    }
    return v3;
}

template <typename T1, typename T2>
void displayPair(const T1& first, const T2& second) {
    std::cout << "(" << first << ": " << second << ")\n";
}

template <typename T>
T findMax(const std::vector<T>& v) {
    if (v.empty()) {
        // throw exception
        throw std::string("warning: findMax has an empty vector");
    }

    T max = v.at(0);
    for (int i = 1; i < v.size(); i++) {
        if (v[i] > max) {
            max = v[i];
        }
    }
    return max;
}


int main(void) {
    //test smallest
    int i1 = -1, i2 = -10, i3 = 45;
    std::cout << "Smallest int: " << smallest(i1, i2, i3) << std::endl;

    double d1 = -1.6, d2 = -10.90, d3 = 45.1;
    std::cout << "Smallest double: " << smallest(d1, d2, d3) << std::endl;

    std::string s1 = "hi", s2 = "bye", s3 = "sigh";
    std::cout << "Smallest str: " << smallest(s1, s2, s3) << std::endl;


    //test displayPair
    displayPair(i1, s3);
    displayPair(d1, d3);


    //test findMax
    std::vector<int> v1 {1, 303, -1, 8291};
    std::cout << "findMax int: " << findMax(v1) << std::endl;

    std::vector<double> v2;
    std::cout << "findMax double: " << findMax(v2) << std::endl;

    return 0;
}