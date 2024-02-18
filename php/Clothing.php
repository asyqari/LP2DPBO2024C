<?php
require_once "Product.php";

class Clothing extends Product
{
    private $size;
    private $material;
    private $gender;

    public function __construct()
    {
    }

    // setter getter
    public function  getSize(): string
    {
        return $this->size;
    }

    public function  setSize($size)
    {
        $this->size = $size;
    }

    public function  getMaterial()
    {
        return $this->material;
    }

    public function  setMaterial($material)
    {
        $this->material = $material;
    }

    public function  getGender()
    {
        return $this->gender;
    }

    public function  setGender($gender)
    {
        $this->gender = $gender;
    }
}
