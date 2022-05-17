#pragma once
#include "../User.h"
#include "../Product/Product.h"
#include <string>
#include <cstddef>

namespace YMA{
    class Supplier: public User{
        public:
            Supplier(){};
            friend std::ostream& operator<<(std::ostream& out, Supplier& man);
            friend std::istream& operator>>(std::istream& in, Supplier& man);
            
            Supplier(std::string name, std::string surname, size_t age, std::string login, std::string password, std::string type); 
            friend bool operator==(const Supplier &s1, const Supplier &s2); //сравнение типа продуктов которыми торгуют
            friend bool operator>(const Supplier &s1, const Supplier &s2);
            friend bool operator<(const Supplier &s1, const Supplier &s2);

            bool exist = false;
            std::string m_type;
            

    };
}
