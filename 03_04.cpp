#include <iostream>
using namespace std;

unsigned int const N = 10, M = 10;

void read_image(char img[][M], unsigned int n, unsigned int m)
{
	cin.ignore();
	for (unsigned int i = 0; i < n; ++i, cin.ignore()) 
	{
		for (unsigned int j = 0; j < m; ++j)
		{
			cin.get(img[i][j]);
		}
	}
}

int main(int argc, char** argv)
{
	char img[N][M];
	unsigned int n, m;
	cin >> n >> m;
	read_image(img, n, m);
	
	for (unsigned int j = 0; j < m; ++j) 
	{
		for (unsigned int i = 0; i < n; ++i)
			cout << img[i][j] << ' ';
		cout << endl;
	}
	
}
