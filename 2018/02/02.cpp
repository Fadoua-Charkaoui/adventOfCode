#include <iostream>
#include <fstream>
#include <string>
#include <algorithm>
#include <vector>

class IDS

{
private:
public:
    void Calculation()
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

                int count = std::count(line.begin(), line.end(), tmp);

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
};

int main()
{

    IDS obj;
    obj.Calculation();

    return 0;
}