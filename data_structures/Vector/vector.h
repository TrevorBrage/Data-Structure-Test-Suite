typedef struct {
  
} DynamicArray;


/**
 * @brief Create a new raw data array with allocated memory.
 *
 * The function can allocate an int array without utilizing its features.
 * The initial size is set to 16, or if the starting number is greater, a power of 2 (16, 32, 64, 128, etc.).
 */
DynamicArray* create_dynamic_array();

/**
 * @brief Returns the number of items in the array.
 *
 * @return The number of items in the array.
 */
void destroy_dynamic_array(DynamicArray* array);

/**
 * @brief Returns the number of items in the array.
 *
 * @return The number of items in the array.
 */
int size(DynamicArray* array);

/**
 * @brief Returns the number of items the array can hold.
 *
 * @return The capacity of the array.
 */
int capacity(DynamicArray* array);

/**
 * @brief Checks if the array is empty.
 *
 * @return Returns true (1) if the array is empty, false (0) otherwise.
 */
int is_empty(DynamicArray* array);

/**
 * @brief Returns the item at the given index in the array.
 *
 * Throws an error if the index is out of bounds.
 *
 * @param index The index of the item to retrieve.
 * @return The item at the specified index.
 */
int at(DynamicArray* array, int index);

/**
 * @brief Adds an item to the end of the array.
 *
 * @param item The item to be added.
 */
void push(DynamicArray* array, int item);

/**
 * @brief Inserts an item at the specified index in the array.
 *
 * Shifts the value at the given index and all trailing elements to the right.
 *
 * @param index The index at which to insert the item.
 * @param item The item to be inserted.
 */
void insert(DynamicArray* array, int index, int item);

/**
 * @brief Adds an item to the beginning of the array.
 *
 * Utilizes the 'insert' function above at index 0.
 *
 * @param item The item to be prepended.
 */
void prepend(DynamicArray* array, int item);

/**
 * @brief Removes and returns the item from the end of the array.
 *
 * @return The value of the item that was removed.
 */
int pop(DynamicArray* array);

/**
 * @brief Deletes the item at the specified index in the array.
 *
 * Shifts all trailing elements to the left.
 *
 * @param index The index of the item to delete.
 */
void delete_at(DynamicArray*, int index);

/**
 * @brief Looks for the specified item in the array and removes the first occurrence.
 *
 * If the item is found in multiple places, only the index holding the first occurrence is removed.
 *
 * @param item The item to be removed.
 */
void remove_item(DynamicArray* array, int item);

/**
 * @brief Looks for the specified item in the array and returns the index of the first occurrence.
 *
 * Returns -1 if the item is not found in the array.
 *
 * @param item The item to search for.
 * @return The index of the first occurrence of the item, or -1 if not found.
 */
int find(DynamicArray* array, int item);

/**
 * @brief Resizes the array to the new capacity.
 *
 * This function is private and should not be called directly.
 * When the capacity is reached, the array is resized to double its size.
 * When popping an item, if the size is 1/4 of the capacity, the array is resized to half its size.
 *
 * @param new_capacity The new capacity of the array.
 */
void resize(DynamicArray* array, int new_capacity);
