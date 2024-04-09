#include "mymath_2.hpp"

double MyFactorization(int a)
{
    if (a < 0){
        return a;
    }else if (a==1) {
        return 1;
    }else{
        return a*MyFactorization(a-1);
    }
}