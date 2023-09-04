#include<bits/stdc++.h>
using namespace std;

#define ROW 3
#define COL 3

int main(){
    int i,j;
    int matrix[ROW][COL]={{2,3,4},{3,4,5},{7,8,6}};
    cout<<"Given the matrix"<<endl;
    for(int i=0;i<ROW;i++){
        for(int j=0;j<COL;j++)
            cout<<matrix[i][j];
            cout<<endl;
    }
    return 0;

    
}