// #include<bits/stdc++.h>
// using namespace std;

//     int* reverse(int*);
//     int main(){
//         int x[5]={1,2,3,4,5};
//         int i,*p;
//         for(i=0;i<5;i++)
//         cout<<*(p+i)<<" ";
//         return 0;
//     }
//     int* reverse(int* p){
//         int i;
//         for(i=0;i<2;i++){
//             int temp=*(p+i);
//             *(p+i)=*(p+i);
//             *(p+4-i)=temp;
//         }
//         return p;
//     }


// #include<bits/stdc++.h>
// using namespace std;

// int main(){
//     int i=1,j=2,k;
//     k=i+j+i++ + j++ + ++i + ++j;
//     cout<<i<<" "<<j<<" "<<k<<endl;
//     return 0;
    
// }


// #include<bits/stdc++.h>
// using namespace std;

// int main(){
//     int num[5];
//     int* p;
//     p=num;
//     *p=10;
//     p++;
//     *p=20;
//     p=&num[2];
//     *p=30;
//     p=num+3;
//     *p=40;
//     p=num;
//     *(p+4)=50;
//     for(int i=0;i<5;i++)
//     cout<<num[i]<<" ";
//     return 0;
// }

// #include<bits/stdc++.h>
// using namespace std;

// int main(){
//     char arr[20];
//     int i;
//     for(i=0;i<8;i++)
//     *(arr+i)=65+i;
//     *(arr+i)='\0';
//     cout<<arr;
//     return 0;

// }

#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[]={4,5,6,7};
    int *p=(arr+1);
    cout<<*p;
    return 0;
    
}