#include <iostream>
using namespace std;


int main()
{
	double size;
	int sum = 0;
	int tmp;
	cin >> size;
	int array[1000];
	
	for (int i = 0; i < size; ++i) {
		cin >> tmp;
		array[i] = tmp;
		sum += array[i];
	}
	double average = sum / size;		
	for (int i = 0; i < size; ++i) {
		if (array[i] > average)
			cout << array[i] << ' ';
	}
}
