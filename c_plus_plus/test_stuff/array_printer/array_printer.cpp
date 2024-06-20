#include <vector>
#include "boost/multi_array.hpp"

int main()
{

    //TODO install boost properly

    std::vector<int> one_d_array{2, 3, 5, 7, 11};

    std::vector<std::vector<int>> two_d_array{{1, 3, 5}, {2, 4, 5}, {4, 5, 6}};

    // Create a 3D array that is 3 x 4 x 2
    typedef boost::multi_array<double, 3> array_type;
    typedef array_type::index index;
    array_type A(boost::extents[3][4][2]);

    // Assign values to the elements
    int values = 0;
    for (index i = 0; i != 3; ++i)
        for (index j = 0; j != 4; ++j)
            for (index k = 0; k != 2; ++k)
                A[i][j][k] = values++;

    return 0;
}