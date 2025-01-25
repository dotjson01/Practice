// union of 2 arrays

#include <stdio.h>
#include <iostream>
#include <vector>

int main()
{
 std::vector<int> a = {1, 2, 3, 4}; // Example initialization of vector a
 std::vector<int> b = {5, 2, 3, 8}; // Example initialization of vector b

    // int a[] = {2, 34, 4, 5};
    // int sizea = 4;
    // int b[] = {5, 4, 6, 7};
    // int sizeb = 4;

    // vector creating
    std::vector<int> ans;

    // pushing all element of vector a to ans
    for (int i = 0; i < a.size(); i++)
    {
        ans.push_back(a[i]);
    }

    // pushing  all element of vector b to ans
    for (int i = 0; i < b.size(); i++)
    {
        ans.push_back(b[i]);
    }

    // Displaying the statement of vector

    // vector containing a and b element
    for(int i = 0;i<ans.size();i++){
        std::cout<<ans[i]<<" ";
    }
    std::cout<<std::endl;

    return 0;
}