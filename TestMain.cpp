#include "Header.h"
int main() {
	std::cout << "Enter the amount of elements in array:\n";
	int array_size = 0;
	while (std::cin >> array_size) // Check for the existence of the array
		if (array_size > 0)
			break;
		else
			std::cout << "Enter size value greater that 0.\n";

	int* unsorted_array = new int[array_size] (); // Initialize array with zeros

	for (int i = 0; i < array_size; i++) // Randomly fill created array with numbers 0-1000
		unsorted_array[i] = rand() % 1000;

	for (int i = 0; i < array_size; i++) // Print filled array
		std::cout << unsorted_array[i] << (i == array_size - 1 ? '\n' : ' ');
}
