#include "Supplier.h"
#include <iostream>

namespace YMA{ 
    Supplier::Supplier(std::string name, std::string surname, size_t age, std::string login, std::string password, std::string type):User(name, surname,  age, login, password ){ //std::string name, std::string surname, size_t age, std::string login, std::string password,
      m_type=type;

    }

   std::ostream& operator<<(std::ostream& out, Supplier& man){
      std::cout << "Name: " << man.m_name << std::endl;
      std::cout << "Surname: " << man.m_surname << std::endl;
      std::cout << "Age: " << man.m_age << std::endl;
      std::cout << "Login: " << man.m_login << std::endl;
      std::cout << "Password: " << man.m_password<< std::endl;
      std::cout << "Type: " << man.m_type << std::endl;
      return out;
   }

   std::istream& operator>>(std::istream& in, Supplier& man){
      std::cout << "Name: " ;
      in >> man.m_name;
      std::cout << "Surname: ";
      in >> man.m_surname ;
      std::cout << "Age: ";
      in >>  man.m_age;
      std::cout << "Login: ";
      in >> man.m_login ;
      std::cout << "Password: " ;
      in >>  man.m_password;
      std::cout << "Type: " ;
      in >>  man.m_type;
      return in;

    }
    bool operator>(const Supplier &s1, const Supplier &s2){
       return s1.m_type>s2.m_type;

    }
    bool operator<(const Supplier &s1, const Supplier &s2){
       return s1.m_type<s2.m_type;
    }

    bool operator==(const Supplier &s1, const Supplier &s2){
        return s1.m_type==s2.m_type;
    }

}
