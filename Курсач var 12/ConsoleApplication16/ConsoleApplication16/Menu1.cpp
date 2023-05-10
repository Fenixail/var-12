#include "Menu1.h"

using namespace std;

int Menu1::Menu()
{
    setlocale(LC_ALL, "rus");
    int select;
    do
    {
        system("CLS");
        cout << "Выберите фигуру:" << endl << endl;
        cout << "Press 1 -  Rectange" << endl;
        cout << "Press 2 -  Pentagon" << endl;
        cout << "Press 3 -  Compare" << endl << endl;
        cout << "EXIT" << endl << endl;
        cout << "Press 11 - Выход из меню" << endl << endl;
        cout << "Выбор: ";
        cin >> select;
        cout << endl;
    } while ((select < 1) || (select > 111));
    return select;
}

int Menu1::MenuR()
{
    setlocale(LC_ALL, "rus");
    int select;
    do
    {
        system("CLS");
        cout << "Выберите пункт : " << endl << endl;
        cout << "Rectange:" << endl;
        cout << "Press 1 - Create Rectange" << endl;
        cout << "Press 2 - Delited Rectange" << endl;
        cout << "Press 3 - Show Rectange" << endl;
        cout << "Press 4 - Verification Rectange" << endl << endl;
        cout << "EXIT" << endl << endl;
        cout << "Press 22 - Вернуться  в главное меню" << endl << endl;
        cout << "Выбор: ";
        cin >> select;
        cout << endl;
    } while ((select < 1) || (select >> 111));
    return select;
}

int Menu1::MenuP()
{
    setlocale(LC_ALL, "rus");
    int select;
    do
    {
        system("CLS");
        cout << "Выберите пункт:" << endl << endl;
        cout << "Pentagon" << endl;
        cout << "Press 1 - Create Pentagon" << endl;
        cout << "Press 2 - Delited Pentagon" << endl;
        cout << "Press 3 - Show Pentagon" << endl;
        cout << "Press 4 - Verification Pentagon" << endl << endl;
        cout << "EXIT" << endl << endl;
        cout << "Press 22 - Вернуться в главное меню" << endl << endl;
        cout << "Выбор: ";
        cin >> select;
        cout << endl;
    } while ((select < 1) || (select >> 111));
    return select;
}

int Menu1::MenuC()
{
    setlocale(LC_ALL, "rus");
    int select;
    do
    {
        system("CLS");
        cout << "Press 1. - Compare figurs" << endl;
        cout << "EXIT" << endl << endl;
        cout << "Press 22 - Вернуться  в главное меню" << endl << endl;
        cout << "Выбор: ";
        cin >> select;
        cout << endl;
    } while ((select < 1) || (select > 111));
    return select;
}
