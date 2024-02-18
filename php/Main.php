<?php
require_once "Shirt.php";

$Shirt[0] = new Shirt();

$Shirt[0]->setId(1);
$Shirt[0]->setName("Asyqari");
$Shirt[0]->setBrand("Uniqlo");
$Shirt[0]->setPrice(9000);
$Shirt[0]->setSize("XL");
$Shirt[0]->setMaterial("Fleece");
$Shirt[0]->setGender("Male");
$Shirt[0]->setColor("Black");
$Shirt[0]->setSleeveT("Long");

$Shirt[1] = new Shirt();

$Shirt[1]->setId(2);
$Shirt[1]->setName("Ama");
$Shirt[1]->setBrand("H&M");
$Shirt[1]->setPrice(12222);
$Shirt[1]->setSize("L");
$Shirt[1]->setMaterial("Cotton");
$Shirt[1]->setGender("Female");
$Shirt[1]->setColor("Pink");
$Shirt[1]->setSleeveT("Long");

$Shirt[2] = new Shirt();

$Shirt[2]->setId(1);
$Shirt[2]->setName("BON");
$Shirt[2]->setBrand("March");
$Shirt[2]->setPrice(99999);
$Shirt[2]->setSize("XS");
$Shirt[2]->setMaterial("Jeans");
$Shirt[2]->setGender("Non-Binary");
$Shirt[2]->setColor("blue");
$Shirt[2]->setSleeveT("short");

echo "==================" . "<br>";
foreach ($Shirt as $data) {
    echo "ID: " . $data->getId() . "<br>";
    echo "Nama: " . $data->getName() . "<br>";
    echo "Brand: " . $data->getBrand() . "<br>";
    echo "Price: " . $data->getPrice() . "<br>";
    echo "Size: " . $data->getSize() . "<br>";
    echo "Material: " . $data->getMaterial() . "<br>";
    echo "Gender: " . $data->getGender() . "<br>";
    echo "Color: " . $data->getColor() . "<br>";
    echo "Sleeve_type: " . $data->getSleeveT() . "<br>";
    echo "==================" . "<br>";
}
