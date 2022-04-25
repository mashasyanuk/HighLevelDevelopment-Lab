#pragma once
#include <string>//проверить на аллергию
#include <cstddef>

namespace YMA{
  class Product{
  public:
    Product();
    Product(std::string name, std::string type, size_t amount, size_t price);
    // void printData();
    std::string getType();
    friend Product operator+(Product product);
    friend bool operator>(const Product &p1, const Product &p2); //сравнение количества продукта
    friend bool operator<(const Product &p1, const Product &p2);
    friend bool operator==(const Product &p1, const Product &p2);

  private:
    std::string p_name;
    size_t p_amount;
    size_t p_price;

  protected:
    std::string p_type;
  };
}
