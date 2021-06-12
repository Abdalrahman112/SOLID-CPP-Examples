#include <iostream>

class TextAddType{
    public:
    virtual std::string add(const std::string& original,
        const std::string& new_string) = 0;
};

class TextAdder{
    public:
    std::string AddToText(const std::string& original,
        const std::string& new_string,TextAddType& adder){
            return adder.add(original , new_string);
        }
};

class TextAppend : public TextAddType{
    public:
    std::string add(const std::string& original,
        const std::string& new_string) override{
            return original + new_string;
        }
};

class TextPrepend : public TextAddType{
    public:
    std::string add(const std::string& original,
        const std::string& new_string) override{
            return new_string + original;
        }
};


