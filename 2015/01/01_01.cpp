#include <iostream>
#include <fstream>
#include <string>
#include <algorithm>

int main(){

    std::ifstream infile("input.txt");
    std::string line;

    infile  >> line ;

    int floor = 0;
/*
    for(int idx = 0 ; idx < line.size() ; ++idx ){
        if ( line[idx] == '('){
            floor++;
        }
        else
        {
            floor--;
        }
        

    }
*/

    floor = 
        std::count(line.begin(), line.end(), '(') - 
        std::count(line.begin(), line.end(), ')') ;
        
    std::cout << "floor in file is : " << floor << std::endl;
    return 0;
}
