// Количество локальных минимумов и максимумов
// [The Number of local maxima]
//
// Дан вектор целочисленных значений. Необходимо разработать
// функцию, которая подсчитывает количество локальных минимумов 
// и максимумов.

#include "logic.h"

int count_local_max(int* array, int size) {
	int count = 0;

	if (size < 2)
		return 0;
	
	for (int i = 0; i < size; i++)
	{
		if (array[i] > array[i - 1] && array[i] > array[i + 1]) {
			count++;
		}
	}
	return count;
}