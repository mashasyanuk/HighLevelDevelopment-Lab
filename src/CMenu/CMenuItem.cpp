#include "CMenuItem.h"
#include <iostream>

namespace YMA {

    char * CMenuItem::getName() {
        return m_item_name;
    }
    CMenuItem::Func CMenuItem::getFunc(){
        return m_func;
    }

    void CMenuItem::print() {
        std::cout << m_item_name;
    }

    int CMenuItem::run() {
        return m_func();
    }
    CMenuItem::CMenuItem(char* m_item_name, Func m_func){};
}
