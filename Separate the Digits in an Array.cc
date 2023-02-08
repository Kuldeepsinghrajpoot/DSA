<<<<<<< HEAD
#include <bits/stdc++.h>
using namespace std;

int splitIntegerOfArray(int arr[]) {

	int size = arr.size();
	//std::vector<int> v;
	int newArr[100];
	for(int i=0;i<size;i++) {
		while(arr[i] != 0) {
	         int n = arr[i]%10;
	        // v.push_back(n);
	         
	         n = n/10;
		}
		reverse(v.begin(), v.end());
	}
	return v;
}
int main() {
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);

     int arr[]={13};
     cout<<splitIntegerOfArray(arr);
	return 0;
=======
#include <bits/stdc++.h>
using namespace std;

int splitIntegerOfArray(int arr[]) {

	int size = arr.size();
	//std::vector<int> v;
	int newArr[100];
	for(int i=0;i<size;i++) {
		while(arr[i] != 0) {
	         int n = arr[i]%10;
	        // v.push_back(n);
	         
	         n = n/10;
		}
		reverse(v.begin(), v.end());
	}
	return v;
}
int main() {
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);

     int arr[]={13};
     cout<<splitIntegerOfArray(arr);
	return 0;
>>>>>>> de7ed409bd884c11208b4a183d94fda8a318950c
}