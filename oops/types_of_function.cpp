
class Rectangle {
// Constructors - called when object is created
    private:
    int length;
    int breadth;

    public:
    // constructor
    Rectangle(); // default constructor 
    Rectangle(int l, int b) // parameterized constructor
    Rectangle(Rectangle &r); // copy constructor

    // mutator used for changing value of data member
    void setLength(int l);
    void setBreadth(int b);

    //accessor used for knowing the value of data members
    int getLength();
    int getBreadth();

    //facilitator actual functions of class
    int area();
    int perimeter();

    //enquiry used for checking if an object satisfies some condition
    int isSquare();

    // destructor used for releasing resources used by object
    ~Rectangle();
};