#include<iostream>
#include<vector>

int main(){

    //creating vector 
    std::vector<int> arr{10,20,30,40,50,60,70,80};

//target set to find from element present in vector
    int target = 100;

    //creating outer loop 
    for(int i=0;i<arr.size();i++){
        int elemennti = arr[i];

        //creating inner loop
        for(int j=i+1;j<arr.size();j++){
            int elementj = arr[j];

            //creating inner loop
            for(int k=j+1;k<arr.size();k++){
                int elementk = arr[k];

                //creating inner last loop
                for(int l = k+1;l<arr.size();l++){
                    int elementl = arr[l];

                    if(elemennti+elementj+elementk+elementl == target)
                    {
                        std::cout<<"{"<<elemennti<<","<<elementj<<","<<elementk<<","<<elementl<< "}" << std::endl;
                    }
                }
            }
        }
    }


    return 0;
}