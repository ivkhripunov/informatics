#include <iostream>
using namespace std;

int main()
{
	int n;
	cin >> n;
	int array[10][10];
	for (int i = 0; i < n; ++i) 
	{
		for (int j = 0; j < n; ++j)
			cin >> array[i][j];
	}

	for (int j = 0; j < n; ++j) 
	{
		for (int i = 0; i < n; ++i)
			cout << array[i][j] << ' ';
		cout << endl;
	}
}
