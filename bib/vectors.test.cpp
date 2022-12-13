#include <iostream>
#include <cmath>
#include <limits>
#include "vectors.hpp"



int main()
{
    Rdec v_spd1;  Rdec v_spd2;
    Rdec v_boost1;  Rdec v_boost2;
    Rdec v_r1;  Rdec v_r2;
    std::cin>>v_spd1.x>>v_spd1.y>>v_boost1.x>>v_boost1.y>>v_r1.x>>v_r1.y;
    std::cin>>v_spd2.x>>v_spd2.y>>v_boost2.x>>v_boost2.y>>v_r2.x>>v_r2.y;

    double s;
    s = std::sqrt(std::pow(v_r1.x - v_r2.x, 2) + std::pow(v_r1.y - v_r2.y, 2));
    std::cout<<s;




}
