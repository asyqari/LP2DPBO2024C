class Product:
    __idProduct = -1
    __name = ""
    __brand = ""
    __price = -1

    # contructor
    def __init__(self, id, name, brand, price):
        self.__idProduct = id
        self.__name = name
        self.__brand = brand
        self.__price = price

    # setter getter

    def getId(self):
        return self.__idProduct

    def setId(self, Id):
        self.__idProduct = Id

    def getName(self):
        return self.__name

    def setName(self, name):
        self.__name = name

    def getBrand(self):
        return self.__brand

    def setBrand(self, brand):
        self.__brand = brand

    def getPrice(self):
        return self.__price

    def setPrice(self, price):
        self.__price = price
