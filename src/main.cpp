//  GENERAL_MAIN.CPP

#include "bucket.hpp"
#include "merge.hpp"
#include "radix.hpp"
#include "selection.hpp"

void sortBucket();
void sortMerge();
void sortRadix();
void sortSelection();

int main(int argc, char const *argv[]) {
	sortBucket();
	sortMerge();
	sortRadix();
	sortSelection();
	return 0;
}
