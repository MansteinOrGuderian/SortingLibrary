#include "Header.h"

void bubblesort(int* selected_array, int array_size) {
	for (int i = 1; i < array_size; i++)
		for (int j = i; j < array_size - 1; j++)
			if (selected_array[j] < selected_array[j + 1]) { // Each neighboring elements are compared
				int temp = selected_array[j];
				selected_array[j + 1] = selected_array[j]; // Swapping elements, "a bubble starts emerging"
				selected_array[j] = temp;
			}
}
