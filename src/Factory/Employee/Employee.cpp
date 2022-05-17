#include "Employee.h"
#include <iostream>

namespace YMA{

    Employee::Employee(std::string name, std::string surname, size_t age, std::string login, std::string password, std::string post):User(name, surname,  age, login, password){
      e_post=post;
    }

    std::ostream& operator<<(std::ostream& out, Employee& man){
      std::cout << "Name: " << man.m_name << std::endl;
      std::cout << "Surname: " << man.m_surname << std::endl;
      std::cout << "Age: " << man.m_age << std::endl;
      std::cout << "Login: " << man.m_login << std::endl;
      std::cout << "Password: " << man.m_password<< std::endl;
      std::cout << "Post: " << man.e_post << std::endl;
      return out;
    }

    std::istream& operator>>(std::istream& in, Employee& man){
      std::cout << "Name: " ;
      in >>  man.m_name ;
      std::cout << "Surname: " ;
      in >>  man.m_surname ;
      std::cout << "Age: " ;
      in >> man.m_age ;
      std::cout << "Login: " ;
      in >>  man.m_login ;
      std::cout << "Password: " ;
      in >> man.m_password;
      std::cout << "Post: ";
      in >> man.e_post;
      return in;
    }

    bool operator>(const Employee &d1, const Employee &d2){
        return d1.e_post>d2.e_post;
    }

    bool operator<(const Employee &d1, const Employee &d2){
        return d1.e_post<d2.e_post;
    }

    bool operator== (const Employee &d1, const Employee &d2){
      return d1.e_post==d2.e_post;
    }



}
