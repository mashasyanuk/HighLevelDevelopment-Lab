#pragma once
#include <cstddef> //what is it


namespace YMA{
    class Employee:public User
    {
        public:
            size_t GetPost();
            void SetPost(std::string post);

        private:
            string* m_post;
    };

}
