// Сортировка из указанного промежутка
// [The Sort from the specified range]
//
// Дан вектор натуральных чисел. Необходимо разработать
// функцию(или программу), которая сортирует часть элементов
// заданного вектора в указанном диапазоне порядковых номеров
// либо по возрастанию, либо по убыванию.

#include "logic.h"

void sort_asc(int* array, int size, int start, int end) {
	
for (int i = start; i < end; i++)
	{
		for (int j = start; j < end; j++)
		{
			if (array[j] > array[j + 1]) {
				int t = array[j];
				array[j] = array[j + 1];
				array[j + 1] = t;
			}

		}
	}

}

void sort_dsc(int* array, int size, int start, int end) {
	
	for (int i = start; i < end; i++)
	{
		for (int j = start; j < end; j++)
		{
			if (array[j] < array[j + 1]) {
				int t = array[j];
				array[j] = array[j + 1];
				array[j + 1] = t;
			}
			
		}
	}
}

void sort_in_range(int* array, int size, int start, int end, bool type) {
	if (start > end) {
		int t = start;
		start = end;
		end = t;
	}

	if (start >= 0 && end >= 0 && start < size && end < size) {
		if (type) {
			sort_asc(array, size, start, end);
		}
		else {
			sort_dsc(array, size, start, end);
		}
	}
}