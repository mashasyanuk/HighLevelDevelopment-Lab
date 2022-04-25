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
            Supplier(std::string name, std::string surname, size_t age, std::string login, std::string password, std::string type); 
            friend bool operator==(const Supplier &s1, const Supplier &s2); //сравнение типа продуктов которыми торгуют
        protected:
            std::string m_type;
    };
}
