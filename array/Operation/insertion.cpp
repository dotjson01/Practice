#include<iostream>
using namespace std;

int main(){

    int arr[10] = {10, 20, 30, 40, 50};
    int n = 5;
    // goal ; {10, 20, 25, 30, 40, 50};
    int pos = 2;
    int value = 25;


    //let's see how the array look before insertion 
    cout<<"Before Insertion:  " ;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    // let's see how the array look after insertion at position 2 
    for(int i = n ; i > pos ; i--){
        arr[i] = arr[i -1];
    }
    arr[pos] = value;
    n++;

    cout<<"After Insertion: ";

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

}