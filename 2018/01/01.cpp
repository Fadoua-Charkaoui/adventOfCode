#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <algorithm>

int main(){

    std::ifstream infile("input.txt");

    //First part:
    int increment;
    int Freq = 0;

    while(infile >> increment) {
       // std::cout << increment << std::endl;
       Freq += increment;
    }
    std::cout << Freq << std::endl;


    //Second part:
    Freq = 0;
    bool Duplicate_found = false;
    std::vector<int> Freqs;
    Freqs.push_back(Freq);

    while (!Duplicate_found){
        infile.seekg(0);
        while(infile >> increment) {
            Freq += increment;
            if(std::count(Freqs.begin(), Freqs.end(), Freq)){
                Freqs.push_back(Freq);
            }
            else {
                std::cout << Freq << std::endl;
                Duplicate_found = true;
                break;
            }
        }
    }
    return 0;
}