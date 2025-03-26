#include <iostream>

int main()
{

    int brr[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}};

//
std::cout<<"Printing row wise"<<std::endl;
    // row - wise input
    for (int i = 0; i < 3; i++)
    {

        for (int j = 0; j < 3; j++)
        {
            std::cout << brr[i][j] << " ";
        }
        std::cout << std::endl;
    }

std::cout<<"Printing Column wise"<<std::endl;
// column wise
    for (int i = 0; i < 3; i++)
    {

        // column wise input
        for (int j = 0; j < 3; j++)
        {
            std::cout << brr[j][i] << " ";
        }
        std::cout << std::endl;
    }


    return 0;
}