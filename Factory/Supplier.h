#pragma once
#include <cstddef>

namespace YMA{
    class Supplier{
        public:
            Supplier(std::string type);
        private:
            std::string m_type;
    };
}
