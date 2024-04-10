#include <iostream>

#include <mymath.hpp>


int main()
{
    double temp = 10;
    std::cout << "Hello cpp: " << temp  << std::endl;

    double add_sum = MyAdd(1.5, 2);
    std::cout << "MyAdd: " << add_sum  << std::endl;

    return 0;
}