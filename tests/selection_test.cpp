//  TEST_SELECTION.CPP

#include <catch.hpp>
#include "selection.hpp"

TEST_CASE("Testing SELECTION sort") {
    std::cout << "\n********* START SELECTION CHECK *********\n" << std::endl;

    srand(time(NULL));
    const int ARRAY_LEN = 20;
    const int INT_RANGE = 100;
    int *array = new int[ARRAY_LEN];

    for (int i = 0; i < ARRAY_LEN; i ++) {
        array[i] = rand() % INT_RANGE;
    }

    // Стандартная сортировка для проверки.
    std::vector<int> v(array, array + ARRAY_LEN);
    std::sort(v.begin(), v.end());

    // Сортировка алгоритмом bubble.
    selection_sort(array, ARRAY_LEN);

    // Сравнение отсортированных массивов.
    for (int i = 0; i < ARRAY_LEN; i++) {
        REQUIRE(array[i] == v[i]);
    }

    std::cout << "\n********** END SELECTION CHECK **********\n" << std::endl;
}
