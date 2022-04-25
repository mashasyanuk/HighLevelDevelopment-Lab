#pragma once
#include <string>
#include <cstddef>


namespace YMA{
    class User {
        public:
          User();
          User(std::string name, std::string surname, size_t age, std::string login, std::string password);
  //        virtual void printPublicData()=0;
  //        virtual void printPersonalData()=0; //чисто виртуальная функция и абстрактный класс
          friend User operator+(User man);

        protected:
            std::string m_name;
            std::string m_surname;
            size_t m_age;
            std::string m_login;
            std::string m_password;
    };
}
