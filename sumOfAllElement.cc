#include <bits/stdc++.h>
using namespace std;

int  sumNumber(int arr[], int n, int sum, int i = 0) {
	if (i == n)
	{
		i = 0;
		return sum;
	}

	int sumDigit = sum + arr[i];
	i++;
	return sumNumber(arr, n, sumDigit, i);
}

int main() {
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);

	int arr[] = {2, 4, 5, 6, 7, 9};
	int sum = 0;
	cout << "total Sum : " << sumNumber(arr, 6, sum, 0);
	return 0;
}