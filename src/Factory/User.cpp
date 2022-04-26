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
}
