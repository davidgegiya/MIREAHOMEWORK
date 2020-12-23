//5 задача «Табуляция». Протабулировать функцию y = (x^2 - 2x + 2) / (x - 1)
#include <iostream>
#include <cstdlib>
#include <math.h>
#include <windows.h>

using namespace std;

int main()
{
SetConsoleCP(1251); //локализируем консоль
SetConsoleOutputCP(1251);
//вводим переменные
double x;
double y;
//сообщаем пользователю функцию
cout << "Функция задана формулой y = (x^2 - 2x + 2) / (x - 1)" << endl;
cout << "Ниже представлена таблица изменения значений функции при изменении x от -4 до 4 с шагом 0.5" << endl;
//начинаем последовательно подсчитывать и выводить y с шагом 0.5, в точке 1, у функции разрыв - выводим сообщение об этом в консоль.
cout << "x|y" << endl;
for (x = -4; x <= 0.5; x+=0.5)
{
    y = (pow(x,2) - 2 * x + 2) / (x - 1);
    cout << x << "|" << y << endl;
}
    if (x == 1)
    {
        cout << "1|Функция в данной точке не существует" << endl;
    }
    //продолжаем выводить значения после разрыва
    for (x = 1.5; x <= 4; x += 0.5)
    {
        y = (pow(x,2) - 2 * x + 2) / (x - 1);
        cout << x << "|" << y << endl;
    }
    return 0;
}

