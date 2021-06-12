#include <iostream>
#include <cstdint>

class Rectangle{
    protected:
    uint16_t Width;
    uint16_t Height;

    public:
    Rectangle(uint16_t width, uint16_t height): Width(width), Height(height){}
    virtual void SetWidth(uint16_t width){
        Width = width;
    }
    virtual void SetHeight(uint16_t height){
        Height = height;
    }
    virtual uint16_t GetWidth(){return Width;}
    virtual uint16_t GetHeight(){return Height;}
    virtual uint32_t CalculateArea(){return Width*Height;}
};

class Square : public Rectangle{
    public:
    Square(uint16_t L): Rectangle(L, L){}
    void SetWidth(uint16_t width) override{(void)width;}
    void SetHeight(uint16_t height) override{(void)height;}
    void SetLength(uint16_t L){ Width=L; Height=L;}
    uint16_t GetLength(){return Width;}
    uint16_t GetWidth() override{return GetLength();}
    uint16_t GetHeight() override{return GetLength();}
};

