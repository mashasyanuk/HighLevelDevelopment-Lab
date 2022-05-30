#!/bin/bash
 g++ -w main.cpp CMenu/CMenuItem.cpp CMenu/CMenu.cpp Factory/Employee/Employee.cpp Factory/Product/Product.cpp Factory/Supplier/Supplier.cpp Factory/User.cpp -o a.out
# clang —std=c++14 -stdlib=libstdc++ main.cpp CMenu/CMenuItem.cpp CMenu/CMenu.cpp Factory/Employee/Employee.cpp Factory/Product/Product.cpp Factory/Supplier/Supplier.cpp Factory/User.cpp -o a.out -static -lstdc++
chmod +x a.out
./a.out
rm a.out