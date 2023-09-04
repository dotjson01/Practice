#include<bits/stdc++.h>
using namespace std;

int returnMax(int array[],int n){
int max=0;
for (int i = 0; i <n; i++)
{
    if(array[i]>max){
        max=array[i];
    }
}
return max;
}

int main(){
int arr[]= {1,12,3,5455,5,67,654};
int max=returnMax(arr,7);
cout<<"largest\n"<<max<<"\n";
return 0;
}