#include "Product.h"
#include <iostream>

namespace YMA{
  Product::Product(std::string name, std::string type, size_t amount, size_t price){
    p_name = name;
    p_type = type;
    p_amount = amount;
    p_price = price;
  }

  // void Product::printData(){
  //   std::cout << "Name of product: " << p_name << std::endl;
  //   std::cout << "Type of product: " << p_type << std::endl;
  //   std::cout << "Amount: " << p_amount<< std::endl;
  //   std::cout << "Price per one: " << p_price<< std::endl;
  // }

  Product operator+(Product product){
      std::cout << "Name of product: " << product.p_name << std::endl;
    std::cout << "Type of product: " << product.p_type << std::endl;
    std::cout << "Amount: " << product.p_amount<< std::endl;
    std::cout << "Price per one: " << product.p_price<< std::endl;
  }

  bool operator>(const Product &p1, const Product &p2){
    return p1.p_amount>p2.p_amount;
  }
  bool operator<(const Product &p1, const Product &p2){
      return p1.p_amount<p2.p_amount;
  }
  bool operator==(const Product &p1, const Product &p2){
    return p1.p_amount==p2.p_amount;
  }


  std::string Product::getType(){
    return p_type;
  }
}
