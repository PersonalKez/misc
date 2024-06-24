#include <vector>
#include <iostream>

int main()
{
    std::vector<int> one_d_array{2, 3, 5, 7, 11};

    std::vector<std::vector<int>> two_d_array{{1, 3, 5}, {2, 4, 5}, {4, 5, 6}};

    // Create a 3D vector

    std::vector<std::vector<std::vector<int>>> three_d_array;

    // Adding values to the vector
    three_d_array.push_back({{1, 2, 3}, {3, 2, 1}});
    three_d_array.push_back({{4, 5, 6}, {6, 5, 4}});

    // Create another 3D vector

    std::vector<std::vector<std::vector<int>>> three_d_array_2;

    // Adding values to the vector
    three_d_array_2.push_back({{1, 4, 5}, {2, 1, 1}});
    three_d_array_2.push_back({{4, 5, 3}, {6, 4, 4}});

    // 4D vector
    std::vector<std::vector<std::vector<std::vector<int>>>> four_d_array;
    // populating...
    four_d_array.push_back(three_d_array);
    four_d_array.push_back(three_d_array_2);

    // print all vectors

    std::cout << "PRINTING 1D VEC" << std::endl;

    for (int i : one_d_array)
    {
        std::cout << i << ' ';
    }

    std::cout << std::endl << "PRINTING 2D VEC" << std::endl;

    for (auto row : two_d_array)
    {
        for (int x : row)
        {
            std::cout << x << ' ';
        }
        std::cout << std::endl;
    }

    std::cout << std::endl << "PRINTING 3D VEC" << std::endl;
    for (auto mat : three_d_array)
    {
        for (auto row : mat)
        {
            for (auto x : row)
            {
                std::cout << x << ' ';
            }
            std::cout << std::endl;
        }
        std::cout << std::endl;
    }

    std::cout << std::endl << "PRINTING 4D VEC" << std::endl;
    for (auto matList : four_d_array)
    {
        for (auto mat : matList)
        {
            for (auto row : mat)
            {
                for (auto x : row)
                {
                    std::cout << x << ' ';
                }
                std::cout << std::endl;
            }
            std::cout << std::endl;
        }
        std::cout << std::endl;
    }

    return 0;
}