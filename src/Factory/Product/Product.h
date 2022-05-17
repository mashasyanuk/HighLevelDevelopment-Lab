#pragma once
#include <string>//проверить на аллергию
#include <cstddef>

namespace YMA{
  class Product{
  public:
    Product(){};
    Product(std::string name, std::string type, size_t amount, size_t price);
    std::string getType();

    friend std::ostream& operator<<(std::ostream& out, Product& product);
    friend std::istream& operator>>(std::istream& in, Product& product);

    friend bool operator>(const Product &p1, const Product &p2); //сравнение количества продукта
    friend bool operator<(const Product &p1, const Product &p2);
    friend bool operator==(const Product &p1, const Product &p2);

    bool exist=false;

  protected:  
    std::string p_name="no name";
    size_t p_amount=0;
    size_t p_price=0;
  public:
    std::string p_type="no type";

  // protected:
  //   std::string p_name="no name";
  //   size_t p_amount=0;
  //   size_t p_price=0;
  //   std::string p_type="no type";
    
  };
}
