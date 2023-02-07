#include <bits/stdc++.h>
using namespace std;

void rowAndColumnSame() {
	int n;
	cin >> n;
	int **arr = new int *[n];

	for (int i = 0; i < n; i++)
	{
		arr[i] = new int[n];
	}

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cin >> arr[i][j];
		}

	}

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cout << arr[i][j] << ",";
		}
		cout << endl;
	}

}

void rowAndColumnDifferent() {
	int row;
	cin >> row;

	int colum;
	cin >> colum;

	int **arr = new int *[row];

	for (int i = 0; i < row; i++)
	{
		arr[i] = new int[colum];
	}

	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < colum; j++)
		{
			cin >> arr[i][j];
		}

	}

	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < colum; j++)
		{
			cout << arr[i][j] << ",";
		}
		cout << endl;
	}
	//free memory


	for (int i = 0; i < row; i++)
	{
		delete [] arr[i];
	}

	delete [] arr;

}
int main() {
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);


	// dynamic memory allocation..

	rowAndColumnDifferent();
	//rowAndColumnSame();

	return 0;
}