
public class Product {
    private int idProduct;
    private String name;
    private String brand;
    private int price;

    // contructor
    public Product() {

    }

    public Product(int id, String name, String brand, int price) {
        this.idProduct = id;
        this.name = name;
        this.brand = brand;
        this.price = price;
    }

    // setter getter

    public int getId() {
        return this.idProduct;
    }

    public void setId(int id) {
        this.idProduct = id;
    }

    public String getName() {
        return this.name;
    }

    public void setName(String name) {
        this.name = name;
    }

    public String getBrand() {
        return this.brand;
    }

    public void setBrand(String brand) {
        this.brand = brand;
    }

    public int getPrice() {
        return this.price;
    }

    public void setPrice(int price) {
        this.price = price;
    }

}
