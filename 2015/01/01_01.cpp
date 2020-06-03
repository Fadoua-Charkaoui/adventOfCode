#include <iostream>
#include <fstream>
#include <string>

int main(){

    std::ifstream infile("input.txt");
    std::string line;

    infile  >> line ;

    int floor = 0;

    

    std::cout << "floor in file is : " << floor << std::endl;
    return 0;
}
