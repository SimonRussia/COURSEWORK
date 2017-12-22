//  EXAMPLE_BUCKET.CPP

#include "bucket.hpp"

//! [bucket_sort_example]

void sortBucket() {
    srand(time(NULL));
    const int ARRAY_LEN = 10;
    const int INT_RANGE = 100;
    // RAD - Для определения индекса корзины,
    // по n-му разряду значение.
    const int RAD = INT_RANGE / 10;

    int *array = new int[ARRAY_LEN];
    for (int i = 0; i < ARRAY_LEN; i++) {
        array[i] = rand() % INT_RANGE;
    }

    // bucket - сортировка
    message(array, ARRAY_LEN);
    bucket_sort(array, ARRAY_LEN, RAD);
    message(array, ARRAY_LEN);
}

//! [bucket_sort_example]

int main(int argc, char const *argv[]) {
    sortBucket();
    return 0;
}
