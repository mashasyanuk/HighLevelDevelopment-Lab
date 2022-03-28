#pragma once
#include <cstddef> //what is it


namespace YMA{
    class Employee:public User
    {
        public:
          Employee(std::string name, std::string surname, size_t age, std::string login, std::string password, std::string post);

        private:
            string* m_post;
    };

}
