#include <iostream>
#include <cstdint>

class TwoDSimpleShape{
    protected:
    uint16_t Width;
    uint16_t Height;
    public:
    TwoDSimpleShape(uint16_t width, uint16_t height): Width(width), Height(height){}
    virtual uint32_t CalculateArea(){return Width*Height;}
};

class Rectangle : public TwoDSimpleShape{
    public:
    Rectangle(uint16_t width, uint16_t height): TwoDSimpleShape(width, height){}
    void SetWidth(uint16_t width){Width = width;}
    void SetHeight(uint16_t height){Height = height;}
    uint16_t GetWidth(){return Width;}
    uint16_t GetHeight(){return Height;}
    
};

class Square : public TwoDSimpleShape{
    public:
    Square(uint16_t L): TwoDSimpleShape(L, L){}
    void SetLength(uint16_t L){ Width=L; Height=L;}
    uint16_t GetLength(){return Width;}
};

