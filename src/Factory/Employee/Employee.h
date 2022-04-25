#pragma once
#include "../User.h"
#include "../Product/Product.h"
#include <string>
#include <cstddef>


namespace YMA{
    class Employee:public User
    {
        public:
        Employee();
          void printPublicData() ;
   //       void printPersonalData() ;
          Employee(std::string name, std::string surname, size_t age, std::string login, std::string password, std::string post);
          friend bool operator==(const Employee &d1, const Employee &d2); //сравнение по должности

        private:
          std::string e_post;
    };

}
