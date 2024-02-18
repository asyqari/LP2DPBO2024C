from Clothing import Clothing


class Shirt(Clothing):
    __color = ""
    __sleeve_type = ""

    def __init__(self, color, sleeve_type):
        self.__color = color
        self.__sleeve_type = sleeve_type

    def getColor(self):
        return self.__color

    def setColor(self, color):
        self.__color = color

    def getSleeveT(self):
        return self.__sleeve_type

    def setSleeveT(self, sleeve_type):
        self.__sleeve_type = sleeve_type
