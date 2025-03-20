#include<iostream>
using namespace std;

void ticketcounter(){
    static int a = 0;
    a++;
    cout<<a<<endl;
}
int main(){
    ticketcounter();
    ticketcounter();
    ticketcounter();
}