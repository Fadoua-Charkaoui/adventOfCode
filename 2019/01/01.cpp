#include <iostream>
#include <fstream>
#include <cmath>

int main()
{

    std::ifstream infile("input.txt");
    int module_mass;
    int fuel_simple_req = 0;
    int fuel_complex_req = 0;

    while (infile >> module_mass)
    {
        //std::cout<< module_mass<< std::endl;
        fuel_simple_req += std::floor(module_mass / 3) - 2; //Part one
        //fuel_complex_req += recusrsive(int(module_mass.strip()))
    }

    std::cout << fuel_simple_req << std::endl;
    return 0;
}