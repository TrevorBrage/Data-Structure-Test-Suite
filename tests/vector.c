#include <stdio.h>
#include <assert.h>
#include "../data_structures/Vector/vector.h"

void run_tests();

int main() {
    run_tests();
    return 0;
}

void run_tests() {
    DynamicArray* array = create_dynamic_array();

    // Tests

    destroy_dynamic_array(array);
    printf("All tests passed successfully!\n");
}
