#include "BubbleSort.h"
#include "InsertionSort.h"
#include "SelectionSort.h"
#include "MergeSort.h"
#include "CountingSort.h"
#include "QuickSort.h"
#include "ConsoleHelper.h"
#include <iostream>
#include "vector"

int main()
{
#pragma region BubbleSort
    std::vector<int> myDataVector = ConsoleHelper::InitializeVectorConsole();

    CountingSort::Sort(myDataVector);

    for (int i = 0; i < myDataVector.size(); ++i) {
        std::cout << myDataVector[i] << " ";
    }
#pragma endregion




}
