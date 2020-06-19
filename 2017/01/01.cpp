#include <iostream>
#include <fstream>
#include <vector>

int main()
{
    int sum_1 = 0, sum_2 = 0;
    char ch;
    std::fstream fin("input.txt", std::fstream::in);
    std::vector<int> line;
    
    while (fin >> std::noskipws >> ch)
    {
        int temp = ch - '0';
        line.push_back(temp);
        //std::cout << temp;
    }

    for (int index = 0; index < line.size(); index++)
    {   
        int new_index = 0;

        if (index == 0)
        {
            if (line[index] == line[line.size() - 1])
            {
                sum_1 += line[index];
            }
        }
        else
        {
            if (line[index] == line[index - 1])
            {
                sum_1 += line[index];
            }
        }

        if (index >= line.size() / 2)
        {
             new_index = index - line.size() / 2;
        }

        else
        {
             new_index = index + line.size() / 2;
        }

        if (line[index] == line[new_index])
        {
            sum_2 += line[index];
        }
    }

    std::cout << sum_1 << std::endl;
    std::cout << sum_2 << std::endl;

    return 0;
}