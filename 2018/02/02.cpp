#include <iostream>
#include <fstream>
#include <string>
#include <algorithm>
#include <vector>

class IDS

{
private:
    std::vector<std::string> ids;

public:
    void Calculation_1()
    {

        std::ifstream infile("input.txt");
        std::string line;
        int count_2 = 0;
        int count_3 = 0;

        while (infile >> line)
        {
            //std::cout << line << std::endl;
            bool has_2 = false;
            bool has_3 = false;

            for (char tmp : line)
            {

                int count = std::count(line.begin(), line.end(), tmp); // 2 3 ...

                if (count == 2)
                {
                    has_2 = true;
                }
                if (count == 3)
                {
                    has_3 = true;
                }
            }
            if (has_2)
            {
                count_2++;
            }
            if (has_3)
            {
                count_3++;
            }
        }
        std::cout << count_2 * count_3 << std::endl;
    }
    void Calculation_2()
    {
        std::ifstream infile("input.txt");
        std::string line;

        while (infile >> line)
        {
            ids.push_back(line);
        }

        std::string answer;
        int diff;
        for (std::string id1 : ids)
        {
            for (std::string id2 : ids)
            {
                int count = 0;
                for (int idx = 0; idx < id1.size(); idx++)
                {
                    if (id1[idx] != id2[idx])
                    {
                        count++;
                        diff = idx;
                    }
                }
                if (count == 1)
                {
                    answer = id1;
                    answer.erase(answer.begin()+diff);
                    std::cout << answer << std::endl;
                }
            }
        }
    }
};

int main()
{
    IDS obj;
    obj.Calculation_1();
    obj.Calculation_2();

    return 0;
}