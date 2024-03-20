#include <iostream>
#include <random>
#include <Windows.h>
void Ex1();
void Ex2();
int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    int choose;
    std::cout << "Выберите номер задания, которое хотите проверить\n";
    std::cin >> choose;
    if (choose == 1)
    {
        Ex1();
    }
    else if (choose == 2)
    {
        Ex2();
    }
    return 0;
}
void Ex1()
{
    const int size = 10;
    int arr[size];
    for (int i = 0; i < size; i++)
    {
        if (i == 0)
        {
            std::cout << "Введите первый элемент массива\n";
            std::cin >> arr[i];
        }
        else
        {
            arr[i] = arr[i - 1] * 2;
        }
    }
    std::cout << "------------------------------------------\n";
    for (int i = 0; i < size; i++)
    {
        std::cout << arr[i] << "\n";
    }
}
void Ex2()
{
    const int size = 10;
    int arr[size];
    for (int i = 0; i < size; i++)
    {
        if (i == 0)
        {
            std::cout << "Введите первый элемент массива\n";
            std::cin >> arr[i];
        }
        else
        {
            arr[i] = arr[i - 1] + 1;
        }
    }
    std::cout << "------------------------------------------\n";
    for (int i = 0; i < size; i++)
    {
        std::cout << arr[i] << "\n";
    }
}
