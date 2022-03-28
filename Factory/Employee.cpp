#include "Employee.h"
#include <iostream>

namespace YMA{
    std::string Employee::GetName(){
      return m_name;
    }

    std::string Employee::GetSurname(){
      return m_surname;
    }

    size_t Employee::GetPost(){
      return m_post;
    }

    void Employee::SetName(std::string name){
      m_name=name;
    }

    void Employee::SetSurname(std::string surname){
      m_surname=surname;
    }

    void Employee::SetAge(size_t age){
      m_age=age;
    }
    virtual void Employee::printPublicData override{
      std::cout << "Имя: " << m_name << " Фамилия: " << m_surname << "Возраст: " << m_age << std::endl;
    }

}
