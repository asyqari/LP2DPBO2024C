// import library
#include <iostream>
#include <string>

// using std namespace
using namespace std;
#include "Product.cpp"

class Shirt : public Product
{
private:
    string color;
    string sleeve_type;

public:
    Shirt(/* args */){

    };
    Shirt(string color, string sleeve_type)
    {
        this->color = color;
        this->sleeve_type = sleeve_type;
    };

    // setter gette

    string getColor()
    {
        return this->color;
    }

    void setColor(string color)
    {
        this->color = color;
    }

    string getSleeve()
    {
        return this->sleeve_type;
    }

    void setSleeveT(string type)
    {
        this->sleeve_type = type;
    }
    ~Shirt(){};
};
