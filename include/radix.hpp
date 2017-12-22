//  "Copyright [2017] <MGTU IU8-33>"
//  RADIX.HPP

/*!
    \file
    \brief radix_sort
    \details В данном файле реализован шаблонный алгоритм устойчивой сортировки RADIX методом LSD.
    \author Овчаров Анисим
    \date 19/12/2017
*/

#ifndef _RADIX_HPP_
#define _RADIX_HPP_

#include <iostream>
#include <chrono>
#include <cstring>
#include "message.hpp"

/*!
Функция getMaxValue.
Осуществляет поиск максимального значения в сортируемом массиве.

\param[in] arr[] - Массив, который необходимо отсортировать.
\param[in] size - Размер передаваемого массива.
\param[out] max - Максимальное значение в сортируемом массиве.
*/

template <typename T>
int getMaxValue(T arr[], int size){
    T max = arr[0];
    for (int i = 1; i < size; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }

    return max;
}
 
/*!
Функция count_sort.
Реализует сортировку массива используя алгоритм устойчивой сортировки COUNTING.

\param[in] arr[] - Массив, который необходимо отсортировать.
\param[in] size - Размер передаваемого массива.
\param[out] exp - Значение порядка, по которому необходимо осуществлять сортировку.
\snippet radix.cpp radix_sort_example
*/

template <typename T>
void count_sort(T arr[], int size, int exp) {
    // Создаем временный пустой массив и заполняем его 0.
    T temp[size];
    memset(temp, 0, sizeof(temp));
    // Создаем массив для подсчета количества элементов
    // заполняем его 0.
    int i, count[10] = {0};
 
    // Подсчитываем количество повторений каждого
    // символа в сортируемом массиве
    // и вносим в массив count.
    for (i = 0; i < size; i++)
        // явное привидение типа int, необходимо
        // для сортировки массивов типа double и float.
        count[ int(arr[i]/exp) % 10 ]++;

    // Проходим по массиву count и складываем значения
    // текущей ячейки со значением в предыдущей.
    // Для получения актуального положения элемента.
    for (i = 1; i < 10; i++)
        count[i] += count[i - 1];
 
    // Заполняе временный массив temp сопоставляя
    // значения сортируемого массива с индексом
    // в массиве count.
    for (i = size - 1; i >= 0; i--) {
        temp[count[ int(arr[i]/exp) % 10 ] - 1] = arr[i];
        count[ int(arr[i]/exp) % 10 ]--;
    }

    // Копируем значения из массива temp
    // в сортируемый массив.
    for (i = 0; i < size; i++)
        arr[i] = temp[i];
}
 
// Функция для определения порядка и запуска сортировки.
/*!
Функция radix_sort.
Осуществляет определение порядка от min -> max (метод LSD) и запускает функцию count_sort.

\param[in] arr[] - Массив, который необходимо отсортировать.
\param[in] size - Размер передаваемого массива.
*/

template <typename T>
void radix_sort(T arr[], int size) {
    // Находим максимальное значение,
    // чтобы определить номер порядка.
    T max = getMaxValue(arr, size);

    // Применяем алгоритм сортировки вставками.
    // Для получения разряда используем экспоненту.
    // exp = 10^i, где i - номер порядка.
    for (int exp = 1; max/exp > 0; exp *= 10)
        count_sort(arr, size, exp);
}

#endif  // _RADIX_HPP_
