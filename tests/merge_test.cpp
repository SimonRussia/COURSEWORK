//  TEST_MERGE.CPP

#include <catch.hpp>
#include "merge.hpp"

TEST_CASE("Testing MERGE sort") {
    std::cout << "\n********* START MERGE CHECK *********\n" << std::endl;

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
    merge_sort(array, 0, ARRAY_LEN - 1);

    // Сравнение отсортированных массивов.
    for (int i = 0; i < ARRAY_LEN; i++) {
        REQUIRE(array[i] == v[i]);
    }

    std::cout << "\n********** END MERGE CHECK **********\n" << std::endl;
}
