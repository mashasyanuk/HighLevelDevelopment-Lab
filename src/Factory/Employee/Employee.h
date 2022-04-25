#pragma once
#include "../User.h"
#include "../Product/Product.h"
#include <string>
#include <cstddef>


namespace YMA{
    class Employee:public User
    {
        public:
          void printPublicData() ;
   //       void printPersonalData() ;
          Employee(std::string name, std::string surname, size_t age, std::string login, std::string password, std::string post);
        private:
          std::string e_post;
    };

}
