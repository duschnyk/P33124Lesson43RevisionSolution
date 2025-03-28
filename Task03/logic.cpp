// Среднее арифметическое неэкстремальных элементов
// [The arithmetic mean of non - extreme elements]
//
// Дан вектор натуральных чисел. Необходимо разработать 
// функцию, которая вычисляет среднее aрифметическое элементов
// вектора без учета минимального и максимального элементов.

#include "logic.h"

int get_max_extreme_element(int* array, int size) {
	int i_max = array[0];

	for (int i = 1; i < size; i++)
	{
		if (array[i] > i_max) {
			i_max = array[i];
		}
	}
	return i_max;
}

int get_min_extreme_element(int* array, int size) {
	int i_min = array[0];

	for (int i = 1; i < size; i++)
	{
		if (array[i] < i_min) {
			i_min = array[i];
		}
	}

	return i_min;
}

double calculate_arithmetical_mean_of_nonextreme_elements(int* array, int size) {
	double sum = 0;
	int count = 0;

	int max = get_max_extreme_element(array, size);
	int min = get_min_extreme_element(array, size);

	for (int i = 0; i < size; i++)
	{
		if (array[i] != max && array[i] != min) {
			sum += array[i];
			count++;
		}
	}

	return count > 0 ? sum / count : 0;
}