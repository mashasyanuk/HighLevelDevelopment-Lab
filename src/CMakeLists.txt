cmake_minimum_required(VERSION 3.10)

# set the project name
project(HighlevelDevelepment)

# add src/
add_subdirectory(src)
# add libs
add_library(
     CMenu
     CMenu/CMenu.cpp
     CMenu/CMenuItem.cpp
     Factory
     Factory/Employee
     Factory/Employee/Employee.cpp
     Factory/Product
     Factory/Product/Product.cpp
     Factory/Supplier
     Factory/Supplier/Supplier.cpp
     User.cpp
     main.cpp
)

# add_library(
#     CMenuItem
#     CMenu/CMenuItem.cpp
# )

# add the executable
# add_executable(HilevelDevelepment main.cpp)

# target_link_libraries(HilevelDevelepment PRIVATE CMenu)
# target_link_libraries(HilevelDevelepment PRIVATE CMenuItem)

# specify the C++ standard
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED True)