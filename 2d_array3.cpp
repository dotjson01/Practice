#include<iostream>

int main(){

    int brr[4][3];

    //rows and column declared
    int rows =4;
    int cols =3;

// outer loop ( row wise)
for(int i =0;i<rows;i++){

    // inner loop (cols wise)
    for(int j =0;j<cols;j++){
        std::cin>>brr[i][j]>>std::endl;
    }
}



    return 0;
}