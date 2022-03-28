#include "Supplier.h"
#include <iostream>
#include <string.h>
//add product to .h
namespace YMA{
    Supplier::Supplier(std::string name, std::string surname, size_t age, std::string login, std::string password, Product product){
      m_type=product.type;
    }
    void Supplier::printPublicData override{
      std::cout << "Name: " << m_name << std::endl;
      std::cout << "Surname: " << m_surname << std::endl
      std::cout << "Age: " << m_age << std::endl;
      std::cout << "Type of products: " << m_type <<std::endl;
    }
}
