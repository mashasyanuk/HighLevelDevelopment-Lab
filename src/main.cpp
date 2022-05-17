#include <iostream>
#include <cmath>
#include "CMenu/CMenu.h"
#include "CMenu/CMenuItem.h"
#include "Factory/Employee/Employee.h"
#include "Factory/Product/Product.h"
#include "Factory/Supplier/Supplier.h"

const int N=50;

YMA::Employee mass_Emp[N];
YMA::Supplier mass_Sup[N];
YMA::Product mass_Pro[N];

int Menu1();
int Menu2();


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


char name[16]="My console menu";

int main(){

    Menu1();

    return 0;
}

int Menu1() {
    using namespace YMA;

    char firstPoint[50]="Say hi";
    char secondPoint[50]="Favourite Name";
    char thirdPoint[50]="Calculate";
    char fourthPoint[50]="Draw";
    char fifthPoint[50]="Operations with classes";

    CMenuItem items[5]={
        CMenuItem(firstPoint, Say_Hi),
        CMenuItem(secondPoint, Favourite_Name),
        CMenuItem(thirdPoint, Calculate),
        CMenuItem(fourthPoint, Draw),
        CMenuItem(fifthPoint, Menu2),
    };
    CMenu menu(name, items, 5);
    while (menu.runCommand()){};

    return 0;
}

int Menu2() {
    using namespace YMA;
    CMenuItem choice[3]={
            CMenuItem("добавление", add),
            CMenuItem("удаление", del),
            CMenuItem("сортировка", sort)
    };
    CMenu menu2("Меню 2", choice, 3);
    while (menu2.runCommand()){};

    return 0;
}

int AddProduct(){
    using namespace YMA;

    int countProducts=0;
    while (mass_Pro[countProducts].exist)
    {
        countProducts++;
        std::cout << countProducts << " " ;
    }
    std::cout << "Введите данные нового покупателя:" << std::endl;

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

}

int AddSupplier(){
    using namespace YMA;

    int countSupplier=0;
    while (mass_Sup[countSupplier].exist)
    {
        countSupplier++;
        std::cout << countSupplier << " " ;
    }

    std::cout << "Введите данные нового покупателя:" << std::endl;

    std::cin >> mass_Sup[countSupplier];
    mass_Sup[countSupplier].exist = true;
    std::cout<<"Готово\n"<< std::endl;

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
    std::cout << std::endl << "Корень из числа" << number << "равно " << pow(number, 0.5) << std::endl;
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
    return 0;

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
    return 0;
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
            else std::cout<<"Список поставщиков пуст\n"<<std::endl;
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
    std::cout<<"Выберите рабочего:"<<std::endl;
    DeleteElement(1);
}

int DelSupplier(){
    std::cout<<"Выберите поставщика:"<<std::endl;
    DeleteElement(2);
}

int DelProduct(){
    std::cout<<"Выберите продукт:"<<std::abort;
    DeleteElement(3);
}

int add(){
    using namespace YMA;
    CMenuItem adding[4]={
            CMenuItem("продукт", AddProduct),
            CMenuItem("поставщик", AddSupplier),
            CMenuItem("рабочий", AddEmployee),
            CMenuItem("выход", Menu1)
    };
    CMenu ADD("Меню 2", adding, 3);
    while (ADD.runCommand()){};

    return 0;

}

int del(){
    using namespace YMA;
    CMenuItem deleting[4]={
            CMenuItem("продукт", DelProduct),
            CMenuItem("поставщик", DelSupplier),
            CMenuItem("рабочий", DelEmployee),
            CMenuItem("выход", Menu1)
    };
    CMenu DEL("Меню 2", deleting, 3);
    while (DEL.runCommand()){};

    return 0;
}

int sort(){
    using namespace YMA;
    CMenuItem sorting[4]={
            CMenuItem("продукт", SortProduct),
            CMenuItem("поставщик", SortSupplier),
            CMenuItem("рабочий", SortEmployee),
            CMenuItem("выход", Menu1)
    };
    CMenu SORT("Меню 2", sorting, 3);
    while (SORT.runCommand()){};

    return 0;
}
