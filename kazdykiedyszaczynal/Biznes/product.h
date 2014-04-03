#ifndef PRODUCT_H
#define PRODUCT_H

#include <map>

class Product
{
    const char * name;
    int price;
    double amount;

    static std::map<char, Product*> map;

    public:
        Product(const char* product_name, char shortcut):name(product_name){map.insert(shortcut, this);};

};

#endif // PRODUCT_H
