// #include <bits/stdc++.h>

// using namespace std;

// bool isSorted(int arr[], int n) {
//   for (int i = 0; i < n; i++) {
//     for (int j = i + 1; j < n; j++) {
//       if (arr[j] < arr[i])
//         return false;
//     }
//   }

//   return true;
// }

// int main() {

//   int arr[] = {1, 2, 3, 4, 5}, n = 5;
//   bool ans = isSorted(arr, n);
//   if (ans) cout << "True" << endl;
//   else cout << "False" << endl;
//   return 0;
// }


#include<bits/stdc++.h>
using namespace std;


bool isSorted(int arr[],int n){
  for(int i=1;i<n;i++){
    if(arr[i]<arr[i-1])
      return false;
  }
  return true;
}

int main(){
  int n;
  cout<<"Enter the size of array";
  cin>>n;

  int arr[n];
  cout<<"Enter the elements in the array";
  for(int i=0;i<n;i++){
  cin>>arr[i];
  }
  if(isSorted(arr,n)){
    cout<<"The Array is Sorted";
  }
  else{
    cout<<"The Array is Not Sorted";
  }
  return 0;
}

