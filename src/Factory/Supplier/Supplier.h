#pragma once
#include "../User.h"
#include "../Product/Product.h"
#include <string.h>

namespace YMA{
    class Supplier: public User{
        public:
            Supplier();
            void printPublicData();
            void printPersonalData();
            Supplier(std::string name, std::string surname, size_t age, std::string login, std::string password, Product product); //std::string name, std::string surname, size_t age, std::string login, std::string password,
        protected:
            std::string m_type;
    };
}