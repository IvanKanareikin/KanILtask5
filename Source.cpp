#include "Header.h"

void full(int** mas, int n, int k) {
	for (int i = 0; i < n; i++)
		for (int j = 0; j < k; j++)
		{
			mas[i][j] = rand() % 20 + 10;
		}
}

void print(int** mas, int n, int k) {
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < k; j++)
		{
			cout << mas[i][j] << " ";
		}
		cout << endl;
	}
}