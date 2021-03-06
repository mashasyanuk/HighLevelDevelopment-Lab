#include <iostream>
#include <cmath>
#include "CMenu/CMenu.h"
#include "CMenu/CMenuItem.h"
#include "Factory/Employee/Employee.h"
#include "Factory/Product/Product.h"
#include "Factory/Supplier/Supplier.h"

const int N=6;

YMA::Employee mass_Emp[N];
YMA::Supplier mass_Sup[N];
YMA::Product mass_Pro[N];


int AddProduct();//
int AddEmployee();//
int AddSupplier();//

int Say_Hi();//
int Favourite_Name();//
int Calculate();//
int Draw();//

int DelEmployee();
int DelSupplier();
int DelProduct();

int SortEmployee();
int SortSupplier();
int SortProduct();

int add();

int del();

int sort();

void DeleteElement(int index);
int Menu1();
int Menu2();


int main(){

    Menu1();

    return 0;
}

int Menu2() {
   using namespace YMA;
   CMenuItem choice[3]={
           CMenuItem("Добавление", add),
           CMenuItem("Удаление", del),
           CMenuItem("Сортировка", sort)
   };
   CMenu menu2("Menu 2", choice, 3);
   while (menu2.runCommand()){};
   return 4;

}


int AddProduct(){
    using namespace YMA;

    int countProducts=0;
    while (mass_Pro[countProducts].exist)
    {
        countProducts++;
        std::cout << countProducts << " " ;
    }
    std::cout << "Введите данные нового продукта:" << std::endl;

    std::cin >> mass_Pro[countProducts];
    mass_Pro[countProducts].exist = true;
    std::cout<<"Готово\n"<< std::endl;
    return 1;
}

int AddEmployee(){
    using namespace YMA;

    int countEmployee=0;
    while (mass_Emp[countEmployee].exist)
    {
        countEmployee++;
        std::cout << countEmployee << " " ;
    }
    std::cout << "Введите данные нового покупателя:" << std::endl;

    std::cin >> mass_Emp[countEmployee];
    mass_Emp[countEmployee].exist = true;
    std::cout<<"Готово\n"<< std::endl;
    return 1;

}

int AddSupplier(){
    using namespace YMA;

    int countSupplier=0;
    while (mass_Sup[countSupplier].exist)
    {
        countSupplier++;
        std::cout << countSupplier << " " ;
    }

    std::cout << "Введите данные нового поставщика:" << std::endl;

    std::cin >> mass_Sup[countSupplier];
    mass_Sup[countSupplier].exist = true;
    std::cout<<"Готово\n"<< std::endl;
    return 1;


}

int Say_Hi() {
    std::cout << "Мы рады видеть тебя сегодня тут, помощник Алексей готов помочь тебе нарисовать красивый ромб на экране, вычислить  квадратный корень из числа или рассказать тебе по секрету своё любимое женское имя!"<< std::endl;
    return 0;
}

int Favourite_Name() {
    std::cout << "Мое любимое женское имя - Адель\n\n";
    return 1;
}

int Calculate(){
    int number=0;
    std::cout << std::endl << "Введите любое положительное число: ";
    std::cin>> number;
    std::cout << std::endl << "Число в квадрате " << number << " равно " << number*number << std::endl;
    return 2;
}

int Draw() {
    int i, j, N = 21;
    int center = N / 2;
    for (i = 0; i < N; i++)
    {
        for (j = 0; j < N; j++)
        {
            if (i <= center)
            {

                if (j >= center - i && j <= center + i)
                    std::cout << "@";
                else
                    std::cout << " ";
            }
            else
            {

                if (j >= center + i - N + 1 && j <= center - i + N - 1)
                    std::cout << "@";
                else
                    std::cout << " ";
            }
        }
        std::cout << std::endl;
    }
    return 3;
}

int SortEmployee(){
    using namespace YMA;
    int amount=0;
    Employee current;
    for(int i=0; i<N; i++)
    {
        if (mass_Emp[i].exist)
        {
            amount++;
        }
    }

    for(int i=0; i<amount; i++){
        for(int j=0; j<amount; j++){
            if (mass_Emp[i]>mass_Emp[j]){
                current=mass_Emp[i];
                mass_Emp[i]=mass_Emp[j];
                mass_Emp[j]=current;
            }
        }
    }
    return 1;

}

int SortSupplier(){
    using namespace YMA;
    int amount=0;
    Supplier current;
    for(int i=0; i<N; i++)
    {
        if (mass_Sup[i].exist)
        {
            amount++;
        }
    }

    for(int i=0; i<amount; i++){
        for(int j=0; j<amount; j++){
            if (mass_Sup[i]>mass_Sup[j]){
                current=mass_Sup[i];
                mass_Sup[i]=mass_Sup[j];
                mass_Sup[j]=current;
            }
        }
    }
    return 0;
}

int SortProduct(){
    using namespace YMA;
    int amount=0;
    Product current;
    for(int i=0; i<N; i++)
    {
        if (mass_Pro[i].exist)
        {
            amount++;
        }
    }

    for(int i=0; i<amount; i++){
        for(int j=0; j<amount; j++){
            if (mass_Pro[i]>mass_Pro[j]){
                current=mass_Pro[i];
                mass_Pro[i]=mass_Pro[j];
                mass_Pro[j]=current;
            }
        }
    }
    return 1;
}

void DeleteElement(int index){
    int count=0;
    int numberDelete=0;
    switch (index) {
        case 1: {
            for (int i=0; i < N; i++) {
                if (mass_Emp[i].exist) {
                    std::cout << i + 1 << ". ";
                    std::cout << mass_Emp[i].m_name;
                    std::cout<<std::endl;
                    count++;
                }
            }
            if (count != 0) {
                std::cin >> numberDelete;
                mass_Emp[numberDelete - 1].exist = false;
            }
            else std::cout<<"Список рабочих пуст\n"<<std::endl;
            break;
        }
        case 2: {
            for (int i=0; i < N; i++) {
                if (mass_Sup[i].exist) {
                    std::cout << i + 1 << ". ";
                    std::cout << mass_Sup[i].m_name;
                    std::cout<<std::endl;
                    count++;
                }
            }
            if (count != 0) {
                std::cin >> numberDelete;
                mass_Sup[numberDelete - 1].exist = false;
            }
            else std::cout<<"Список Postов пуст\n"<<std::endl;
            break;
        }
        case 3: {
            for (int i=0; i < N; i++) {
                if (mass_Pro[i].exist) {
                    std::cout << i + 1 << ". ";
                    std::cout << mass_Pro[i].p_type;
                    std::cout<<std::endl;
                    count++;
                }
            }
            if (count != 0) {
                std::cin >> numberDelete;
                mass_Pro[numberDelete - 1].exist = false;
            }
            else std::cout<<"Список товаров пуст\n"<<std::endl;
            break;
        }
        default:{
            std::cout << "Вы ошиблись!" << std::endl;
            del();
        }
    }
    del();
}

int DelEmployee(){
    std::cout<<"Выберете рабочего:"<<std::endl;
    DeleteElement(1);
    return 1;
}

int DelSupplier(){
    std::cout<<"Выберете поставщика:"<<std::endl;
    DeleteElement(2);
    return 1;
}

int DelProduct(){
    std::cout<<"Выберете продукт:"<<std::abort;
    DeleteElement(3);
    return 1;

}

int add(){
    using namespace YMA;
    CMenuItem adding[4]={
            CMenuItem("Продукт", AddProduct),
            CMenuItem("Поставщик", AddSupplier),
            CMenuItem("Рабочий", AddEmployee),
            CMenuItem("Выход в меню", Menu1)
    };
    CMenu ADD("Menu 2", adding, 4);
    while (ADD.runCommand()){};

    return 0;

}

int del(){
    using namespace YMA;
    CMenuItem deleting[4]={
            CMenuItem("Продукт", DelProduct),
            CMenuItem("Поставщик", DelSupplier),
            CMenuItem("Покупатель", DelEmployee),
            CMenuItem("Выход в меню", Menu1)
    };
    CMenu DEL("Menu 2", deleting, 4);
    while (DEL.runCommand()){};

    return 0;
}

int sort(){
    using namespace YMA;
    CMenuItem sorting[4]={
            CMenuItem("Продукт", SortProduct),
            CMenuItem("Поставщик", SortSupplier),
            CMenuItem("Покупатель", SortEmployee),
            CMenuItem("Выход в меню", Menu1)
    };
    CMenu SORT("Menu 2", sorting, 4);
    while (SORT.runCommand()){};

    return 0;
}


int Menu1() {
    using namespace YMA;

    CMenuItem items[5]={
        CMenuItem("Привет", Say_Hi),
        CMenuItem("Имя", Favourite_Name),
        CMenuItem("Калькулятор", Calculate),
        CMenuItem("Рисование", Draw),
        CMenuItem("Классы", Menu2)
    };
    CMenu menu("Меню", items, 5);
    while (menu.runCommand()){};
    return 0;

}