#pragma once
#include <cstddef>

namespace YMA{
    class Supplier: public Product, public User{
        public:
            Supplier(std::string name, std::string surname, size_t age, std::string login, std::string password, Product product);
        private:
            std::string m_type;
    };
}
