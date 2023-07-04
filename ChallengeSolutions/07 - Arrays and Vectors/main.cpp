#include <iostream>
#include <vector>

int main()
{
    std::vector<int> vector1, vector2;

    vector1.push_back(10);
    vector1.push_back(20);

    std::cout << "\n=== VECTOR 1 ===\n";
    std::cout << vector1.size() << std::endl;

    for (size_t i=0; i < vector1.size(); i++)
        std::cout << vector1.at(i) << std::endl;

    vector2.push_back(100);
    vector2.push_back(200);

    std::cout << "\n=== VECTOR 2 ===\n";
    std::cout << vector2.size() << std::endl;

    for (size_t i=0; i < vector2.size(); i++)
        std::cout << vector2.at(i) << std::endl;
    
    std::vector<std::vector<int>> vector_2d;

    vector_2d.push_back(vector1);
    vector_2d.push_back(vector2);

    std::cout << "\n=== VECTOR 2D ===\n";
    for (size_t i=0; i < vector_2d.size(); i++)
    {
        for (size_t j=0; j < vector_2d.at(i).size(); j++)
            std::cout << vector_2d.at(i).at(j) << std::endl;
    }

    vector1.at(0) = 1000;

    std::cout << "\n=== VECTOR 2D ===\n";
    for (size_t i=0; i < vector_2d.size(); i++)
    {
        for (size_t j=0; j < vector_2d.at(i).size(); j++)
            std::cout << vector_2d.at(i).at(j) << std::endl;
    }

    std::cout << "\n=== VECTOR 1 ===\n";
    for (size_t i=0; i < vector1.size(); i++)
        std::cout << vector1.at(i) << std::endl;

    return 0;
}