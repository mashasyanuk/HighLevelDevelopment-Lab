#pragma once
#include <string>

namespace YMA{
  class Product{
  public:

    Product(std::string type, std::string product, std::string amount, std::string price);
    virtual void printData();

  private:
    std::string m_name;
    std::string m_type;
    size_t m_amount;
    size_t m_price;
  };
}
