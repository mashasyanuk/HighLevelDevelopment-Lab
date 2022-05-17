#pragma once
#include "../User.h"
#include "../Product/Product.h"
#include <string>
#include <cstddef>


namespace YMA{
    class Employee:public User
    {
        public:
          Employee(){};

          friend std::ostream& operator<<(std::ostream& out, Employee& man);
          friend std::istream& operator>>(std::istream& in, Employee& man);
          
          Employee(std::string name, std::string surname, size_t age, std::string login, std::string password, std::string post);
          
          friend bool operator==(const Employee &d1, const Employee &d2); //сравнение по должности
          friend bool operator>(const Employee &d1, const Employee &d2);
          friend bool operator<(const Employee &d1, const Employee &d2);
          bool exist=false;

        private:
          std::string e_post="no post";
    };

}
