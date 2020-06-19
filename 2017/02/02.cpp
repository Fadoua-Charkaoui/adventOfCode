#include <iostream>
#include <fstream>
#include <vector>
#include <algorithm>

int main()
{
    std::ifstream infile("input.txt");
    std::string line;
    int sum = 0;
    int div_sum = 0;

    while (std::getline(infile, line))
    {
        size_t pos = 0;
        std::string token;

        std::vector<int> tmp;

        while ((pos = line.find('\t')) != std::string::npos)
        {
            token = line.substr(0, pos);
            tmp.push_back(std::stoi(token));
            line.erase(0, pos + 1);
        }
        tmp.push_back(std::stoi(line));

        int min_tmp = *std::min_element(tmp.begin(), tmp.end());
        int max_tmp = *std::max_element(tmp.begin(), tmp.end());
        sum += max_tmp - min_tmp;
        // std::cout<<max_tmp<<std::endl;
        //std::cout<<min_tmp<<std::endl;
        for (int i : tmp)
        {
            for (int t : tmp)
            {
                if (i == t)
                    continue;

                if (i % t == 0)
                    div_sum += i / t;
            }
        }
    }

    std::cout << sum << std::endl;
    std::cout << div_sum << std::endl;

    return 0;
}