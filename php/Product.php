<?php
class Product
{
    private $idProduct = -1;
    private $name = "";
    private $brand = "";
    private $price = -1;

    public function __construct($idProduct, $name, $brand, $price)
    {
        $this->idProduct = $idProduct;
        $this->name = $name;
        $this->brand = $brand;
        $this->price = $price;
    }

    // setter getter
    public function getId(): int
    {
        return $this->idProduct;
    }

    public function setId($id)
    {
        $this->idProduct = $id;
    }

    public function getName(): string
    {
        return $this->name;
    }

    public function setName($name)
    {
        $this->name = $name;
    }

    public function getBrand(): string
    {
        return $this->brand;
    }

    public function setBrand($brand)
    {
        $this->brand = $brand;
    }

    public function getPrice(): int
    {
        return $this->price;
    }

    public function setPrice($price)
    {
        $this->price = $price;
    }
}
