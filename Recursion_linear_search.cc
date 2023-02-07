#include <bits/stdc++.h>
using namespace std;


bool search(int arr[], int key, int size) {

	if (size == 0)
	{
		return false;
	}

	if (arr[0] == key)
	{
		return true;
	}
	return search(arr + 1, key, size - 1);
}

int main() {
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);

	int arr[] = {1, 2, 3, 4, 0};
	cout << search(arr, 6, 5);
	return 0;
}