#ifndef MYMENU_CMENU_H
#define MYMENU_CMENU_H

#include "CMenuItem.h"
#include <cstddef>

namespace YMA {
class CMenu {
    public:
        CMenu(char *, CMenuItem *, size_t);
        int getSelect() const;
        bool isRun() const;
        char *getTitle();
        size_t getCount() const;
        CMenuItem *getItems();
        void print();
        int runCommand();

    private:
        int m_select=-1;
        size_t m_count=0;
        bool m_running=false;
        char *m_title;
        CMenuItem *m_items;
    };
}

#endif // MYMENU_CMENU_H
