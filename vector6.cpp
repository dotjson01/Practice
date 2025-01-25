#include<iostream>
#include<vector>

int main(){

//initalization of vectors
    std::vector<int> arr{10,20,30,40};

//target value to find
    int target = 80;

//outer loop to compare with another element 
    for(int i=0;i<arr.size();i++){
        int elementi = arr[i];

        for(int j=i+1;j<arr.size();j++){
            int elementj = arr[j];

            for(int k=j+1;k<arr.size();k++){
                if(elementi+elementj+arr[k] == target){
                    std::cout<<"{"<<elementi<<","<<elementj<<","<<arr[k]<<"}"<<std::endl;
                }
            }
        }

    }


    return 0;
}