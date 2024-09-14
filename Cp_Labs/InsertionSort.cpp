#include "InsertionSort.h"

#include "vector"

using namespace std;

 void InsertionSort::Sort(vector<int> &data) {
	 int DataLenght = data.size();
	 int key;
	 int PreffixIndex;
	 for (int i = 1; i < DataLenght-1; i++) {
		 key = i;
		 PreffixIndex = i - 1;
		 while (PreffixIndex >= 0) {
			 if (data[PreffixIndex] > data[key]) {
				 swap(data[key], data[PreffixIndex]);
				 key = PreffixIndex;
			 }
			 PreffixIndex--;
		 }
	 }
}