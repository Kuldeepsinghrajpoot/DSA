#include <bits/stdc++.h>
using namespace std;


bool search(int arr[], int key, int s, int e) {

	if (s > e)
	{
		return -1;
	}
	int mid = s + (e - s) / 2;
	if (arr[mid]==key)
	{
		return true;
	}

	if (arr[mid] < key)
	{
		s = mid + 1;
	}
	if (arr[mid] > key)
	{
		e = mid - 1;
	}

	return search(arr,key,s,e);
}
int main() {
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);

    int arr[]={1,2,3,4,5,0};
    int e=5;
    cout<<search(arr,6,0,e);
	return 0;
}