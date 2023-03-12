// HW 19.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include<ctime>;
#include<cstdlib>
int trp(int a, int b) {
    while (b) b ^= a ^= b ^= a %= b;
    return a;
}
int mirror_number(int number) {
    int n = 0;
    while (number)
    {
        n = 10 * n + number % 10;
        number /= 10;
    }

    return n;
}
template<typename T>
void print_arr(T arr[], const int length) {
    std::cout << '[';
    for (int i = 0; i < length; i++)
        std::cout << arr[i] << " ,";
    std::cout << "\b\b]\n";
}


template <typename T>
int sort(T arr[], const int length, int n) {
    for (int i = 1; i < length; i++)
        if (n = arr[i]) {
            for (int j = 1; j < length; j++) {
                if (arr[j] > arr[j + 1]) {
                    int m = arr[j];
                    arr[j] = arr[j + 1];
                    arr[j + 1] = m;
                }
            }
        }
    return n;
    }
    
template <typename T>
void fill_arr(T arr[], const int length, int left, int right) {
    srand(time(NULL));
    for (int i = 0; i < length; i++)
        arr[i] = rand() % (right - left) + left;
}
template <typename T>
void fill_mass(T arr, const int length, int A, int B) {
    srand(time(NULL));
    for (int i = 0; i < length; i++)
        arr[i] = rand() % (B - A) + A;
}


int main()
{
    setlocale(LC_ALL, "Russian");
    //Задача 1.Общий делитель
    /*int a, b;
    std::cout << "Введите 2 числа:\n";
    std::cin >> a >> b;
    std::cout << "Наибольший общий делитель:\n";
    trp(a, b);
    std::cout << trp(a, b);*/
    //Задача 2. Зеркальные числа
    /*int n;
    std::cout << "Введите числа для сортировки:\n";
    std::cin >> n;
    std::cout << "Итоговый результат:\n";
    mirror_number(n);
    std::cout << mirror_number(n);*/
    //Задача 3.Массив
    /*int n;
    const int size = 5;
    int arr[size]{ 50,23,15,11,9 };
    std::cout << "Изначальный массив:\n";
    print_arr(arr,size);
    std::cout << "Введите индекс числа:\n";
    std::cin >> n;
    std::cout << "Итоговый вариант:\n";
    sort(arr, size, n);
    print_arr(arr, size);*/
    //Задача 4. Пустой массив
    int a, b;
    const int size = 10;
    int arr[size]{};
    std::cout << "Введите начало и конец диапазона:\n";
    std::cin >> a >> b;
    std::cout << "Итоговый массив:\n";
    fill_mass(arr, size, a, b);
    print_arr(arr, size);
    
    
    
    
    
    return 0;
}


