//  "Copyright [2017] <MGTU IU8-33>"
//  MERGE.HPP

/*!
    \file
    \brief merge_sort
    \details В данном файле реализован шаблонный рекурсивный алгоритм устойчивой сортировки MERGE.
    \author Овчаров Анисим
    \date 17/12/2017
*/

#ifndef _MERGE_HPP_
#define _MERGE_HPP_

#include <iostream>
#include <chrono>
#include "message.hpp"

/*!
Функция merge.
Реализует сортировку массива используя алгоритм устойчивой сортировки MERGE.

\param[in] arr[] - Массив, который необходимо отсортировать.
\param[in] left - Левая граница [index] массива.
\param[in] medium - Середина [index] между левой и правой границами массива.
\param[in] right - Правая граница [index] массива.
\snippet merge.cpp merge_sort_example
*/

template <typename T>
void merge(T arr[], int left, int medium, int right) {
    int i, j, k;
    int leftSize = medium - left + 1;
    int rightSize =  right - medium;

    // Создаем временные массивы Left и Right.
    T L[leftSize], R[rightSize];

    // Копируем значения в массивы L[] и R[].
    for (i = 0; i < leftSize; i++)
        L[i] = arr[left + i];

    for (j = 0; j < rightSize; j++)
        R[j] = arr[medium + 1 + j];

    // Слияние L[] и R[] в сортируемый массив.
    i = 0;  // Индекс для левого массива.
    j = 0;  // Индекс для правого массива.
    k = left;  // Индекс для слияния левого и правого массивов.

    while (i < leftSize && j < rightSize) {
        if (L[i] <= R[j]) {
            arr[k] = L[i];
            i++;
        } else {
            arr[k] = R[j];
            j++;
        }
        k++;
    }

    // Проверяем L[] на оставшиеся элементы,
    // если они есть, копируем в сортируемый масив.
    while (i < leftSize) {
        arr[k] = L[i];
        i++;
        k++;
    }

    // Проверяем R[] на оставшиеся элементы,
    // если они есть, копируем в сортируемый масив.
    while (j < rightSize) {
        arr[k] = R[j];
        j++;
        k++;
    }
}

/*!
Функция merge_sort.
Рекурсивным методом разделяет сортируемый массив на два подмассива.

\param[in] arr[] - Массив, который необходимо отсортировать.
\param[in] left - Левая граница [index] массива.
\param[in] right - Правая граница [index] массива.
*/
template <typename T>
void merge_sort(T arr[], int left, int right) {
    if (left < right) {

        // Получем середину сортируемого массива.
        int medium = left + (right - left)/2;

        // Сортируем левую и правую части массива,
        // путем рекурсивного вызова merge_sort.
        merge_sort(arr, left, medium);
        merge_sort(arr, medium + 1, right);
        
        merge(arr, left, medium, right);
    }
}

#endif  // _MERGE_HPP_
