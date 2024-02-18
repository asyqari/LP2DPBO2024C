// import library
#include <iostream>
#include <string>

// using std namespace
using namespace std;

#include "Product.cpp"
class Clothing : public Product
{
private:
    string size;
    string material;
    string gender;

public:
    Clothing()
    {
    }

    Clothing(string size, string gender, string material)
    {
        this->size = size;
        this->gender = gender;
        this->material = material;
    }

    string getSize()
    {
        return this->size;
    }

    void setSize(string size)
    {
        this->size = size;
    }

    string getMaterial()
    {
        return this->material;
    }

    void setMaterial(string material)
    {
        this->material = material;
    }

    string getGender()
    {
        return this->gender;
    }

    void setGender(string gender)
    {
        this->gender = gender;
    }
    ~Clothing(){};
};
