
// package praktikum.p2.LP2;

import java.util.Scanner;
import java.util.ArrayList;

public class Main {
    public static void main(String[] args) {
        // variables
        int idProduct = 0;
        String name;
        String brand;
        int price;
        String size;
        String material;
        String gender;
        String color;
        String sleeve_type;

        Scanner sc = new Scanner(System.in);

        // instantiasi list
        ArrayList<Shirt> list = new ArrayList<Shirt>();

        // n data
        int n;
        System.out.println("Selamat datang\nMasukan jumlah data yang diinginkan: ");
        n = sc.nextInt();

        for (int i = 0; i < n; i++) {
            idProduct++;
            Shirt temp = new Shirt();
            System.out.println("Data ke-" + (i + 1));
            System.out.println("Nama: ");
            name = sc.next();
            System.out.println("brand: ");
            brand = sc.next();
            System.out.println("price: ");
            price = sc.nextInt();
            System.out.println("size: ");
            size = sc.next();
            System.out.println("material: ");
            material = sc.next();
            System.out.println("gender: ");
            gender = sc.next();
            System.out.println("color: ");
            color = sc.next();
            System.out.println("sleeve_type: ");
            sleeve_type = sc.next();

            // masukin inputan itu ke setter
            temp.setId(idProduct);
            temp.setName(name);
            temp.setBrand(brand);
            temp.setPrice(price);
            temp.setSize(size);
            temp.setMaterial(material);
            temp.setGender(gender);
            temp.setColor(color);
            temp.setSleeveT(sleeve_type);

            // masukin ke dalam listnya
            list.add(temp);
        }

        // print semua data
        System.out.println("DATA DALAM LIST");
        for (int i = 0; i < list.size(); i++) {
            System.out.println("DATA KE-" + (i + 1) + "\n");
            System.out.println("===========================\n");
            System.out.println("ID_PRODUCT: " + list.get(i).getId() + "\n");
            System.out.println("NAMA: " + list.get(i).getName() + "\n");
            System.out.println("BRAND: " + list.get(i).getBrand() + "\n");
            System.out.println("PRICE: " + list.get(i).getPrice() + "\n");
            System.out.println("SIZE: " + list.get(i).getSize() + "\n");
            System.out.println("MATERIAL: " + list.get(i).getMaterial() + "\n");
            System.out.println("GENDER: " + list.get(i).getGender() + "\n");
            System.out.println("COLOR: " + list.get(i).getColor() + "\n");
            System.out.println("SLEEVE_TYPE: " + list.get(i).getSleeve() + "\n");

        }
        System.out.println("===========================\n");
    }
}
