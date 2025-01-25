// #include<iostream>
// #include<vector>


// //pair sum

// int main(){

//     //creating vector 
//     std::vector<int> arr{10,20,30,40,50};
//     int target = 50;

//     //outer loop traverse for each element
//     for(int i =0;i<arr.size();i++)
//     { 
//         int element = arr[i];

//         //for every element will traverese on aage vale element
//         for(int j = +1;j<arr.size();j++){
//             if(element +arr[j] == target){
//                             std::cout<<"{"<<element<<","<<arr[j]<<"}"<<std::endl;

//             }
//         }
//     }

//     return 0;
// }
//output : 
// {10,40}
// {20,30}
// {30,20}


#include <iostream>
#include <vector>

int main() {
    std::vector<int> arr{10, 20, 30, 40, 50};
    int target = 50; // Example target sum

    for (int i = 0; i < arr.size(); i++) { 
        int element = arr[i];

        for (int j = i + 1; j < arr.size(); j++) {
            if (element + arr[j] == target) {
                std::cout << "{" << element << "," << arr[j] << "}" << std::endl;
            }
        }
    }

    return 0;
}

//output:
// {10,40}
// {20,30}