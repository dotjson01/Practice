#include <stdio.h>
#include <limits.h>
#include <iostream>

int main()
{
    int arr[] = {2,34,40,56};
    int size = 4;

    int maxi = INT_MIN;

    for (int i = 0; i < size; i++)
    {
        if (arr[i] > maxi)
        {
            maxi = arr[i];
        }
    }
    std::cout << "Maximum Number is" << maxi << std::endl;

    return 0;
}