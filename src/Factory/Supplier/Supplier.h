#pragma once
#include "../User.h"
#include "../Product/Product.h"
#include <string>
#include <cstddef>

namespace YMA{
    class Supplier: public User{
        public:
            Supplier();
            void printPublicData();
 //           void printPersonalData();
            Supplier(std::string name, std::string surname, size_t age, std::string login, std::string password, std::string type); //std::string name, std::string surname, size_t age, std::string login, std::string password,
        protected:
            std::string m_type;
    };
}
//библиотеки х86
//функция пошагово проверять
//