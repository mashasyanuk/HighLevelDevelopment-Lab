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


        protected: // дружественные функции имеют доступ к приватным переменным
            std::string m_name="no name";
            std::string m_surname="no surname";
            size_t m_age=0;
            std::string m_login="no login";
            std::string m_password="no password";
    };
}
