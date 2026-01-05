#include<iostream>

void buyHealth(int &x, int &y){
    if(y>= 50){
        y -= 50;
        x += 30;
        std::cout<<"After Health"<<std::endl; 
    }
    else{
        std::cout<<"Enough Coins"<<std::endl;
    }
}


int main(){

    int playerHealth = 70;
    int playerCoins=100;


    std::cout<<"Before Health"<<playerHealth<<std::endl;
    std::cout<<"Before Coins"<<playerCoins<<std::endl;

    buyHealth(playerHealth, playerCoins);


    std::cout<<"After Health"<<playerHealth<<std::endl;
    std::cout<<"After Coins"<<playerCoins<<std::endl;
}