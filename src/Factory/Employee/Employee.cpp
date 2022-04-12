#include "Employee.h"
#include <iostream>

namespace YMA{
    Employee::Employee(std::string name, std::string surname, size_t age, std::string login, std::string password, std::string post):User(name, surname,  age, login, password){
      e_post=post;
    }
    void Employee::printPersonalData(){
      std::cout << "Login: " << m_login << std::endl;
      std::cout << "Password: " << m_password<< std::endl;
    }

    void Employee::printPublicData(){
      std::cout << "Name: " << m_name << std::endl;
      std::cout << "Surname: " << m_surname << std::endl;
      std::cout << "Age: " << m_age << std::endl;
      std::cout << "Post: " << e_post << std::endl;
    }

}
