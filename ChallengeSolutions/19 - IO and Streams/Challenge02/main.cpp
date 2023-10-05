#include <fstream>
#include <iostream>
#include <iomanip>
#include <string>


int main() {
    std::ifstream in_file;
    in_file.open("responses.txt");

    if (!in_file)
    {
        std::cerr << "Problem opening file" << std::endl;
        return 1;
    }
    std::string answers{};
    in_file >> answers;

    const int sub_width {15}, total_width {sub_width + 7};

    std::string response {}, name {};
    double average {};
    int num_students {};

    std::cout << "Student" << std::setw(sub_width)
              << "Score" << std::endl
              << std::setw(total_width)
              << std::setfill('-')
              << "" << std::endl;

    std::cout << std::setfill(' ');

    while (in_file >> name >> response)
    {   
        int score {};
        for (int i = 0; i < answers.length(); i++)
        {
            if (response[i] == answers[i])
                score += 1;
        }
        // TODO: Change hard-coded (5 - name.lenght()) to a better algo (5 is the average length of a name in this scenario)
        std::cout << name << std::setw(sub_width + (5 - name.length()))
                  << score << std::endl;

        average += score;
        num_students++;
    }

    std::cout << std::setw(total_width)
              << std::setfill('-')
              << "" << std::endl;
    std::cout << std::setfill(' ')
              << std::setprecision(1)
              << std::fixed;

    if (num_students != 0)
        average = static_cast<double>(average) / num_students;

    std::cout << "Average Score" << std::setw(sub_width - (total_width - sub_width))
              << average << std::endl;

    in_file.close();
    return 0;
}
