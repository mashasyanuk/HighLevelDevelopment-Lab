bkb

#pragma region functions
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

int GetEmployee(){
  using namespace YMA;
  Employee Alex("Alexander", "Kreis", 56, "alex_kreis007", "bestofthebest", "Director");
  Alex.printPublicData();
  Alex.printPersonalData();
  return 4;
}

int GetSupplier(){
  using namespace YMA;

  Product Cheese("Milk and others", "Cheese", 30, 400 );
  Supplier Anatolyi("Anatolyi", "Sverdlov", 30, "anat_sverd99", "getout32", "Milk and others");
  Cheese.printData();
  Anatolyi.printPublicData();
  Anatolyi.printPersonalData();
  return 5;
}
#pragma endregion

const int items_number=6;
char name[16]="My console menu";

int main() {
    using namespace YMA;
    char firstPoint[50]="Say hi";
    char secondPoint[50]="Favourite Name";
    char thirdPoint[50]="Calculate";
    char fourthPoint[50]="Draw";
    char fifthPoint[50]="Employee";
    char sixthPoint[50]="Supplier";

    CMenuItem items[6]={
        CMenuItem(firstPoint, Say_Hi),
        CMenuItem(secondPoint, Favourite_Name),
        CMenuItem(thirdPoint, Calculate),
        CMenuItem(fourthPoint, Draw),
        CMenuItem(fifthPoint, GetEmployee),
        CMenuItem(sixthPoint, GetSupplier)
    };
    CMenu menu(name, items, items_number);
    while (menu.runCommand()){};

    return 0;
}
