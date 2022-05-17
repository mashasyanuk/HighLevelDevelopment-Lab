#include "Product.h"
#include <iostream>

namespace YMA{

  Product::Product(std::string name, std::string type, size_t amount, size_t price){
    p_name = name;
    p_type = type;
    p_amount = amount;
    p_price = price;
  }

  std::ostream& operator<<(std::ostream& out, Product& product){
    out << "Name of product: " << product.p_name << std::endl;
    out << "Type of product: " << product.p_type << std::endl;
    out << "Amount: " << product.p_amount<< std::endl;
    out << "Price per one: " << product.p_price<< std::endl;
    return out;
  }

  std::istream& operator>>(std::istream& in, Product& product){
    std::cout << "Name of product: " ;
    in >> product.p_name ;

    std::cout << "Type of product: " ;
    in >> product.p_type ;

    std::cout << "Amount: " ;
    in >> product.p_amount ;

    std::cout << "Price per one: ";
    in >> product.p_price ;

    return in;
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
