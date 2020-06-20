#include <iostream>
#include <fstream>
#include <vector>

int main()
{
    std::ifstream infile("input.txt");
    std::string line;
    int pos;
    std::string token;

    std::vector<long> list_int;

    infile >> line;

    while ((pos = line.find(',')) != std::string::npos)
    {
        token = line.substr(0, pos);
        list_int.push_back(std::stoi(token));
        line.erase(0, pos + 1);
    }
    list_int.push_back(std::stoi(line));

    int counter = 0;

    /*
1,9,10,3,
2,3,11,0,
99,
30,40,50
*/

    // Replace position 1 with the value 12 and replace position 2 with the value 2
    list_int[1] = 12;
    list_int[2] = 2;

    while (list_int[counter] != 99) // list_int[0] = 1
    {
        int pos1 = list_int[counter + 1]; //   list_int[1] = 9
        int pos2 = list_int[counter + 2];
        int pos3 = list_int[counter + 3];

        long val1 = list_int[pos1]; //    list_int[9]= 30
        long val2 = list_int[pos2];

        switch (list_int[counter]) //switch(1)
        {

        case 1:

            list_int[pos3] = val1 + val2;

            break;

        case 2:

            list_int[pos3] = val1 * val2;

            break;
        }

        counter += 4;
    }
    std::cout << list_int[0];
    return 0;
}