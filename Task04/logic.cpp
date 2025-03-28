// Сумма элементов [The Sum of elements]
//
// Необходимо разработать функцию, которая вычисляет 
// сумму элементов массива, расположенных между первыми
// максимальным по модулю и минимальным по модулю элементами.

#include "logic.h"

int get_max_index(int* array, int size) {
	int i_max = 0;

	for (int i = 1; i < size; i++)
	{
		if (abs(array[i]) > abs(array[i_max])) {
			i_max = i;
		}
	}

	return i_max;
}

int get_min_index(int* array, int size) {
	int i_min = 0;

	for (int i = 1; i < size; i++)
	{
		if (abs(array[i]) < abs(array[i_min])) {
			i_min = i;
		}
	}

	return i_min;
}

int sum_between_first_min_max(int* array, int size) {
	int sum = 0;
	
	int max = get_max_index(array, size);
	int min = get_min_index(array, size);
	
	if (min > max)
	{
		int t = max;
		max = min;
		min = t;
	}
	if (min + 1 == max)
		return 0;
	for (int i = min + 1; i < max; i++)
	{
		sum += array[i];
	}

	return sum;
}