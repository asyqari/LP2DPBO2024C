from Shirt import Shirt
from tabulate import tabulate

n = int(input("Masukan berapa banyak data: "))


datas = []
idProduct = 0
for i in range(n):
    print(f"Data-{i+1}")
    idProduct = idProduct + 1
    nama = str(input("Nama: "))
    brand = str(input("brand: "))
    price = int(input("price: "))
    size = str(input("size: "))
    material = str(input("material: "))
    gender = str(input("gender: "))
    color = str(input("color: "))
    sleeve_type = str(input("sleeve_type: "))

    temp = Shirt("", "")

    temp.setId(idProduct)
    temp.setName(nama)
    temp.setBrand(brand)
    temp.setPrice(price)
    temp.setSize(size)
    temp.setMaterial(material)
    temp.setGender(gender)
    temp.setColor(color)
    temp.setSleeveT(sleeve_type)

    datas.append(temp)

    # table header
    table_data = [
        [
            "ID",
            "Nama",
            "Brand",
            "Price",
            "Size",
            "Material",
            "Gender",
            "Color",
            "Sleeve_Type",
        ]
    ]
for data in datas:
    table_data.append(
        [
            data.getId(),
            data.getName(),
            data.getBrand(),
            data.getPrice(),
            data.getSize(),
            data.getMaterial(),
            data.getGender(),
            data.getColor(),
            data.getSleeveT(),
        ]
    )
    print(tabulate(table_data, headers="firstrow", tablefmt="grid"))
