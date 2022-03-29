#pragma once
#include "../User.h"
#include <string.h>


namespace YMA{
    class Employee:public User
    {
        public:
          virtual void printPublicData();
          Employee(std::string name, std::string surname, size_t age, std::string login, std::string password, std::string post);

        private:
          std::string e_post;
    };

}
