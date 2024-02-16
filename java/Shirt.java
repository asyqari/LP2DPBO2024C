
public class Shirt extends Clothing {

    private String color;
    private String sleeve_type;

    public Shirt() {

    }

    public Shirt(String color, String sleeve_type) {
        this.color = color;
        this.sleeve_type = sleeve_type;
    }

    // setter gette

    public String getColor() {
        return this.color;
    }

    public void setColor(String color) {
        this.color = color;
    }

    public String getSleeve() {
        return this.sleeve_type;
    }

    public void setSleeveT(String type) {
        this.sleeve_type = type;
    }
}
