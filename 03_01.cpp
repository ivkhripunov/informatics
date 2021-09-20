#include <iostream>
using namespace std;


int main()
{
	int n;
	cin >> n;
	int const size = n;
	int array[size];
	
	for (int i = 0; i < size; ++i) 
		cin >> array[i];
		
	for (int i = size - 1; i >= 0; --i)
		cout << array[i] << ' ';
		
}
