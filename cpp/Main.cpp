#include <iostream>
#include <string>
#include <list>
using namespace std;
#include "Shirt.cpp"

int main()
{

    int idProduct = 0, price;
    string name, brand, size, material, gender, color, sleeve_type;
    Shirt temp; // penampung sementara data objek
    // listnya
    list<Shirt> llist;

    // iterator buat isi list
    list<Shirt>::iterator ite = llist.begin();

    int n;
    cout << "Masukan berapa banyak data: ";
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cout << "Data ke-" << (i + 1) << endl;
        idProduct = idProduct + 1;
        cout << "Nama: ";
        cin >> name;
        cout << "brand: ";
        cin >> brand;
        cout << "price: ";
        cin >> price;
        cout << "size: ";
        cin >> size;
        cout << "material: ";
        cin >> material;
        cout << "gender: ";
        cin >> gender;
        cout << "color: ";
        cin >> color;
        cout << "sleeve_type: ";
        cin >> sleeve_type;

        temp.setId(idProduct);
        temp.setName(name);
        temp.setBrand(brand);
        temp.setPrice(price);
        temp.setSize(size);
        temp.setMaterial(material);
        temp.setGender(gender);
        temp.setColor(color);
        temp.setSleeveT(sleeve_type);

        llist.push_back(temp);
    }

    int count = 0;
    cout << "=======================" << endl;
    for (list<Shirt>::iterator it = llist.begin(); it != llist.end(); it++)
    {
        cout << "Data ke-" << count + 1 << endl;
        cout << "ID: " << idProduct << endl;
        cout << "Nama: " << name << endl;
        cout << "Brand: " << brand << endl;
        cout << "price: " << price << endl;
        cout << "size: " << size << endl;
        cout << "material: " << material << endl;
        cout << "gender: " << gender << endl;
        cout << "color: " << color << endl;
        cout << "sleeve_type: " << sleeve_type << endl;
        cout << "=======================" << endl;
    }
}