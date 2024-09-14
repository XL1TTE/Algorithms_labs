#include "QuickSort.h"
#include "vector"

using namespace std;

void QuickSort::Sort(vector<int>& data) {

	int DataLenght = data.size();
	int DataSeparator;

	int Key;

	if (DataLenght > 1) {
		DataSeparator = DataLenght / 2;
		// Разделяем коллекцию на две части
		vector<int> dataLeft; // Левая

		vector<int> dataRight; // Правая

		Key = data[DataSeparator];

		for (int i = 0; i < DataLenght; i++) {
			if (i != DataSeparator) {
				if (data[i] < Key) {
					dataLeft.push_back(data[i]);
				}
				else {
					dataRight.push_back(data[i]);
				}
			}
		}

		Sort(dataLeft);
		Sort(dataRight);

		BuildData(data, dataLeft, dataRight, Key);

	}

}

void QuickSort::BuildData(vector<int>& data, vector<int>& left, vector<int>& right, int& key) {
	int lenD = data.size();
	int lenL = left.size();
	int lenR = right.size();

	int pointer = 0;

	for (int i = 0; i < lenL; ++i) {
		data[i] = left[i];
	}
	data[lenL] = key;
	pointer = lenL + 1;

	for (int i = 0; i < lenR; ++i) {
		data[pointer + i] = right[i];
	}

}