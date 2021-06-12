#include <iostream>
#include <cstdint>

class TaxCalculator;

class UnitedStates{
    friend TaxCalculator;

    uint16_t avg_citizen_income;

    public:
    UnitedStates(uint16_t avg_income) :  avg_citizen_income(avg_income){}
    
};

class UnitedKingdom{
    friend TaxCalculator;

    uint16_t avg_citizen_income;

    public:
    UnitedKingdom(uint16_t avg_income) :  avg_citizen_income(avg_income){}
};

class TaxCalculator{
    public:
    uint16_t CalculateTax(UnitedKingdom country){
        return country.avg_citizen_income / 10;
    }
    uint16_t CalculateTax(UnitedStates country){
        return country.avg_citizen_income / 8;
    }
};

