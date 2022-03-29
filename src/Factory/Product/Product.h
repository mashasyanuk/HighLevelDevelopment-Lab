#pragma once
#include <string>

namespace YMA{
  class Product{
  public:
    Product();
    Product(std::string name, std::string type, size_t amount, size_t price);
    virtual void printData();
    std::string getType();

  protected:
    std::string p_type;

  private:
    std::string p_name;
    size_t p_amount;
    size_t p_price;
  };
}
