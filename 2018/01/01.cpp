#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <algorithm>

int main()
{

    std::ifstream infile("input.txt");

    //First part:
    int increment;
    int Freq = 0;
    std::vector<int> incs;

    while (infile >> increment)
    {
        // std::cout << increment << std::endl;
        Freq += increment;
        incs.push_back(increment);
    }
    std::cout << Freq << std::endl;

    //Second part:
    Freq = 0;
    bool Duplicate_found = false;
    std::vector<int> Freqs;
    Freqs.push_back(Freq);

    while (!Duplicate_found)
    {
        for (int increment : incs)
        {
            Freq += increment;
            if (std::count(Freqs.begin(), Freqs.end(), Freq) == 0)
            {
                Freqs.push_back(Freq);
            }
            else
            {
                std::cout << Freq << std::endl;
                Duplicate_found = true;
                break;
            }
        }
    }
    return 0;
}