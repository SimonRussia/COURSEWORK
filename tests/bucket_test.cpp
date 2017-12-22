//  TEST_BUCKET.CPP

#include <catch.hpp>
#include "bucket.hpp"

TEST_CASE("Testing BUCKET sort") {
    std::cout << "\n********* START BUCKET CHECK *********\n" << std::endl;

    srand(time(NULL));
    const int ARRAY_LEN = 20;
    const int INT_RANGE = 100;
    const int RAD = INT_RANGE / 10;  // Для определения индекса корзины.
    int *array = new int[ARRAY_LEN];

    for (int i = 0; i < ARRAY_LEN; i ++) {
        array[i] = rand() % INT_RANGE;
    }

    // Стандартная сортировка для проверки.
    std::vector<int> v(array, array + ARRAY_LEN);
    std::sort(v.begin(), v.end());

    // Сортировка алгоритмом bubble.
    bucket_sort(array, ARRAY_LEN, RAD);

    // Сравнение отсортированных массивов.
    for (int i = 0; i < ARRAY_LEN; i++) {
        REQUIRE(array[i] == v[i]);
    }

    std::cout << "\n********** END BUCKET CHECK **********\n" << std::endl;
}
