// Среднее арифметическое ненулевых элементов
// [The Arithmetic Mean of non - zero elements].
//
// Дан вектор целых чисел. Необходимо разработать функцию, 
// которая вычисляет среднее арифметическое ненулевых элементов вектора.
#include "logic.h"

double calculate_arithmetical_mean_of_nonzero_elements(int* array, int size) {
	double count = 0;
	double sum = 0;
	
	for (int  i = 0; i < size; i++)
	{
		if (array[i] != 0) {
			sum += array[i];
			count++;
		}
	}

	if (count == 0)
		return 0;

	double arithmetical_mean = sum / count;

	return arithmetical_mean;
}