#include "Product.h"
#include <iostream>

namespace YMA{
  Product::Product(std::string type, std::string product, std::string amount, std::string price){
    m_name=name;
    m_type=type;
    m_amount=amount;
    m_price=price;
  }

  void Product::print(){
    std::cout << "Name of product: " << m_name<< std::endl;
    std::cout << "Type of product: " << m_type<< std::endl;
    std::cout << "Amount: " << m_amount<< std::endl;
    std::cout << "Price per one: " << m_price<< std::endl;
  }

}
