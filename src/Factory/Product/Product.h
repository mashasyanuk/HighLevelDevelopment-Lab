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
  protected:
    std::string p_name;
    size_t p_amount;
    size_t p_price;
    std::string p_type;
  };
}
