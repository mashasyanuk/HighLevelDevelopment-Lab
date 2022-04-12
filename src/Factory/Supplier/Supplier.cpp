#include "Supplier.h"
#include <iostream>

namespace YMA{ 
    Supplier::Supplier(std::string name, std::string surname, size_t age, std::string login, std::string password, std::string type):User(name, surname,  age, login, password ){ //std::string name, std::string surname, size_t age, std::string login, std::string password,
      m_type=type;
    }
    void Supplier::printPublicData(){
      std::cout << "Name: " << m_name << std::endl;
      std::cout << "Surname: " << m_surname << std::endl;
      std::cout << "Age: " << m_age << std::endl;
      std::cout << "Type of products: " << m_type <<std::endl;
    }
    void Supplier::printPersonalData(){
    std::cout << "Login: " << m_login << std::endl;
    std::cout << "Password: " << m_password<< std::endl;
  }
}
