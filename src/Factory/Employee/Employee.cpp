#include "Employee.h"
#include <iostream>

namespace YMA{

    Employee::Employee(std::string name, std::string surname, size_t age, std::string login, std::string password, std::string post){
      m_post=post;
    }

    void Employee::printPublicData override{
      std::cout << "Name: " << m_name << std::endl;
      std::cout << "Surname: " << m_surname << std::endl;
      std::cout << "Age: " << m_age << std::endl;
      std::cout << "Post: " << m_post << std::endl;
    }

}
