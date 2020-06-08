#include <iostream>
#include <fstream>
#include <string>
#include <algorithm>
#include <vector>


int main(){

    std::ifstream infile("input.txt");
    std::string line;
    int paper = 0 , ribbon = 0;

    while(infile >> line){
        size_t pos = 0;
        std::string token;

        std::vector<int> tmp;

        while ((pos = line.find('x')) != std::string::npos) {
            token = line.substr(0, pos);
            tmp.push_back(std::stoi(token));
            line.erase(0, pos + 1);
        }
        tmp.push_back(std::stoi(line));

        std::sort(tmp.begin() , tmp.end());

        paper += 2 * tmp[0] * tmp[1] + 2 * tmp[1] * tmp[2] + 2 * tmp[0] * tmp[2];
        paper += tmp[0] * tmp[1];

        ribbon += tmp[0] * tmp[1] * tmp[2];
        ribbon +=  2 * tmp[0] + 2 * tmp[1];
        


    }

    std::cout << paper << std::endl << ribbon << std::endl; 
    return 0;
}
