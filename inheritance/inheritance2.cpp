include<iostream>
using namespace std;

class Rectangle{
    private:
    int lenght;
    int breadth;

    public:
    Rectangle();
    Rectangle(int l,int b);
    Rectangle(Rectangle &r);
    int getLenght();
    int getBreadth();
    void setLenght(int l);
    void setBreadth(int b);
    int area();
    int perimeter();
    bool isSquare();
    ~Rectangle();
};

class Cuboid:public Rectangle{
    private:
    int height;
    public:
    Cuboid(int h){
        height = h;
    }
    int getHeight();
    void setHeight(int h);
    int volume();
    ~Cuboid();
}
int main(){

}