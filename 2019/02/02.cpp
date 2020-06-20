#include <iostream>
#include <fstream>
#include <vector>

class computer
{

private:
    int counter = 0;
    std::vector<long> list_int;

public:
    void fill_list()
    {
        std::ifstream infile("input.txt");
        std::string line;
        int pos;
        std::string token;

        infile >> line;

        while ((pos = line.find(',')) != std::string::npos)
        {
            token = line.substr(0, pos);
            list_int.push_back(std::stoi(token));
            line.erase(0, pos + 1);
        }
        list_int.push_back(std::stoi(line));
    }

    void set_noun_verb(int noun, int verb)
    {
        list_int[1] = noun;
        list_int[2] = verb;
    }

    void run()
    {
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
    }

    long get_result()
    {
        return list_int[0];
    }
};

int main()
{

    computer obj;
    obj.fill_list();
    obj.set_noun_verb(12, 2);
    obj.run();
    std::cout << obj.get_result() << std::endl;
    for (int noun = 0; noun < 100; noun++)
    {
        bool result_found = false;
        for (int verb = 0; verb < 100; verb++)
        {
            computer iter;
            iter.fill_list();
            iter.set_noun_verb(noun, verb);
            iter.run();

            if (iter.get_result() == 19690720)
            {
                std::cout << 100 * noun + verb << std::endl;
                result_found = true;
                break;
            }
        }

        if (result_found)
        {
            break;
        }
    }
    return 0;
}
