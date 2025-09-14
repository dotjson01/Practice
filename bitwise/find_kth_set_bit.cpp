#include<iostream>
using namespace std;


int checkbit(int number, int kth){
    return ((number>>kth) &  1 ) == 1 ;
}
int main(){

    int n,k;
    cout<<"Enter the value of n"<<endl;
    cin>>n;
    cout<<"Enter the value of k"<<endl;
    cin>>k;

    cout<<(checkbit(n,k) ? "true":"false")<<endl;
    return 0;
}






/*

We are checking:

5 & 1
Convert to binary (in 4-bit representation for simplicity):

text
5 = 0101
1 = 0001

Perform AND bit by bit
Now compare each column of binary:


   0101   (5 in binary)
&  0001   (1 in binary)
  ------
   0001   (result = 1 in decimal)


*/