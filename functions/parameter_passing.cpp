#include<iostream>
using namespace std;

void swap(int a,int b){
    int temp = a;
    a = b;
    b=temp;
    cout<<"Hello I am local fucntion , function deleted after executing into stack "<<endl;
    cout << "After swap: a = " << a << ", b = " << b << endl;
}
int main(){
    int x, y;
    cout << "Enter the value of x and y" << endl;
    cin >> x >> y;
    
    cout << "Before swap: x = " << x << ", y = " << y << endl;
    swap(x, y);  // Call swap function correctly
    cout << "After swap: x = " << x << ", y = " << y << endl;
    
    return 0;
}

/*
Real-Life Analogy
Imagine you and a friend share a Google Doc:

Call by Value (without &):

Your friend gets a separate copy of your document
Changes they make won't affect your original
Call by Reference (with &):

You share a direct link to your Google Doc
Any changes either person makes are instantly visible to both
You both see and edit the SAME document


Without the &, this function would:

Make temporary copies of x and y
Swap those copies
Discard the copies when the function ends
Original x and y would remain unchanged!
Benefits of Using References (&)
Direct Modification: Can change the original values
Memory Efficiency: Doesn't create copies of large objects
Return Multiple Values: Can modify multiple parameters
*/