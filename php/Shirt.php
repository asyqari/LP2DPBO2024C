<?php
require_once "Clothing.php";

class Shirt extends Clothing
{

    private $color;
    private $sleeve_type;

    public function __construct()
    {
    }

    public function getColor(): string
    {
        return $this->color;
    }

    public function setColor($color)
    {
        $this->color = $color;
    }

    public function getSleeveT(): string
    {
        return $this->sleeve_type;
    }

    public function setSleeveT($type)
    {
        $this->sleeve_type = $type;
    }
}
