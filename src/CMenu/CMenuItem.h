#ifndef MYMENU_CPP_CMENUITEM_H
#define MYMENU_CPP_CMENUITEM_H

namespace YMA {
class CMenuItem {
    public:
        typedef int(*Func)();
        Func getFunc();
        char * getName();
        CMenuItem();
        CMenuItem(char *, Func);
        void print();
        int run();
    private:
        char *m_item_name;
        Func m_func;

    };
}

#endif // MYMENU_CPP_CMENUITEM_H
