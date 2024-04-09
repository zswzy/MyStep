#include <iostream>

// from src folder
#include "mymath_1.hpp"
#include "mymath_2.hpp"

// from 3rd party
#include "trdmath_1.hpp"
#include "trdprint.hpp"


int main()
{
    double temp = 10;
    std::cout << "Hello cpp: " << temp  << std::endl;

    double add_sum = MyAdd(1.5, 2);
    std::cout << "MyAdd: " << add_sum  << std::endl;

    double fac_num = MyFactorization(5);
    std::cout << "MyFactorization: " << fac_num  << std::endl;

    double exp_num = TrdExp(3);
    std::cout << "TrdExp: " << exp_num  << std::endl;

    TrdPrint();

    return 0;
}