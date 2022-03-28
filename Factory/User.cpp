
#include "User.h"
#include <iostream>

namespace YMA{

  User::User(std::string name, std::string surname, size_t age, std::string login, std::string password){
    m_name=name;
    m_surname=surname;
    m_age=age;
    m_login=login;
    m_password=password;
  }
  void User::printPublicData(){
    std::cout << "Имя: " << m_name << " Фамилия: " << m_surname << "Возраст: " << m_age << std::endl;
  }
  void User::printPersonalData(){
    std::cout << "Логин: " << m_login << " Пароль: " << m_password<< std::endl;
  }

}
