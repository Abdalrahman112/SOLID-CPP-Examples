#include <iostream>
#include <cstdint>
#include <vector>
#include <tuple>

class BasketSearcher{   // abstract module
    public:
    virtual std::vector<std::string> SearchByColor(const std::string& color) = 0;
};

class FruitBasket: public BasketSearcher{ // Low-level module
    public:
    std::vector<std::tuple<std::string,std::string>> Basket;
    void AddToBasket(const std::string& Fruit, const std::string& Color){
        Basket.push_back(std::make_tuple(Fruit, Color));
    }
    std::vector<std::string> SearchByColor(const std::string& color) override{
        std::vector<std::string> Found;
        for(auto item: Basket){
            if (std::get<1>(item) == color){
                Found.push_back(std::get<0>(item));
            }
        }
    return Found;
    }
    
};

class ColorSearcher{ // High-level module
    public:
    void ListColor(BasketSearcher& basket,std::string color){
        for(auto item: basket.SearchByColor(color)){
            std::cout<< "Found " << item << std::endl;
        }
    }
};


