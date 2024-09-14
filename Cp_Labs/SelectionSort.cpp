#include "SelectionSort.h"
#include "vector"

using namespace std;

void SelectionSort::Sort(vector<int>& data) {
	int DataLenght = data.size();
	int PostionToSet;
	int MinIndex;

	for (int iter = 0; iter < DataLenght; iter++) {
		PostionToSet = iter; // Позиция в которую будем устанавливать минимальное значение

		MinIndex = iter; // Устанавливаем минимальную позицию по умолчанию

		for (int i = iter; i < DataLenght; i++) {
			if (data[i] < data[MinIndex]) {
				MinIndex = i;
			}
		}
		swap(data[PostionToSet], data[MinIndex]);
	}
}