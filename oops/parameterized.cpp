/*
Agar tum apne hisaab se values dena chahte ho, toh parameterized constructor ka use kar sakte ho.

Booking Custom Room 

*/
#include<iostream>
using namespace std;

class HotelRoom{
    private:
    int Roomnumber;
    string GuestName;

    public:
    HotelRoom(int r,string name) // geeting information from users end allocating specific room and specific name on record 
    {
        Roomnumber = r;
        GuestName = name;
        cout<<" Room "<<Roomnumber<<" Booked for "<<GuestName<<endl; // information displayed after geeting information
    }
    void getDetails(){
        cout<<" Guest Name "<<GuestName<<endl;
        cout<<" Room Number "<<Roomnumber<<endl;
    }
};
int main(){
    // now paasing value through arguments
    HotelRoom h1(321,"Mohan");
    h1.getDetails();

    // for next user
    HotelRoom h2(490,"Sahil");
    h2.getDetails();

    
}