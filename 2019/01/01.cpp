#include <iostream>
#include <fstream>
#include <cmath>

int recusrsive(int module_mass)
{
    int tmp = 0;
    if (std::floor(module_mass / 3) - 2 > 0)
    {
        tmp = std::floor(module_mass / 3) - 2;
        return tmp + recusrsive(tmp);
    }
    else
        return 0;
}

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
        fuel_complex_req += recusrsive(module_mass);        //Part two
    }

    std::cout << fuel_simple_req << std::endl;
    std::cout << fuel_complex_req << std::endl;

    return 0;
}
