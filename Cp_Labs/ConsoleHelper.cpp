#include "ConsoleHelper.h"
#include "iostream"
#include "sstream"
#include "vector"

using namespace std;

std::vector<int> ConsoleHelper::InitializeVectorConsole() {

	ostringstream oss;

	string callback = "";

	std::vector<int> data;
	int DataLenght;

	cout << "Enter lenght of array." << endl;
	cin >> DataLenght;
	cout << "Array initialization, please enter the numbers." << endl;

	for (int i = 0; i < DataLenght; ++i)
	{
		int x;
		cin >> x;
		data.push_back(x); // ��������� ������
	}
	for (int i = 0; i < data.size(); ++i)
	{
		oss << data[i] << " ";
	}
	callback = oss.str();

	cout << "Inserted data - " << callback << endl;
	return data;
}
