#include <iostream>
#include <string>
using namespace std;

class Product
{
private:
    int idProduct;
    string name;
    string brand;
    int price;

public:
    Product()
    {
    }
    // contructor dengan paramater
    Product(int idProduct, string name, string brand, int price)
    {
        this->idProduct = idProduct;
        this->name = name;
        this->brand = brand;
        this->price = price;
    }

    // setter getter

    int getId()
    {
        return this->idProduct;
    }

    void setId(int id)
    {
        this->idProduct = id;
    }

    string getName()
    {
        return this->name;
    }

    void setName(string name)
    {
        this->name = name;
    }

    string getBrand()
    {
        return this->brand;
    }

    void setBrand(string brand)
    {
        this->brand = brand;
    }

    int getPrice()
    {
        return this->price;
    }

    void setPrice(int price)
    {
        this->price = price;
    }
    ~Product(){};
};
