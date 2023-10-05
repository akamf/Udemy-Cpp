#include <fstream>
#include <iostream>
#include <iomanip>
#include <string>


int main()
{
    std::ifstream in_file {"romeoandjuliet.txt"};
    std::ofstream out_file {"romeoandjuliet_copy.txt"};

    if (!in_file)
    {
        std::cerr << "Problem opening input file" << std::endl;
        return 1;
    }
    if (!out_file)
    {
        std::cerr << "Problem opening output file" << std::endl;
        return 1;
    }
    
    std::string line {};
    int line_number {};

    while (std::getline(in_file, line))
    {
        if (line != "")
        {
            line_number++;
            out_file << std::setw(5) << std::left << line_number << " " << line << std::endl;
        }
        else
            out_file << line << std::endl;
        {

        }
    }

    in_file.close();
    out_file.close();
    return 0;
}