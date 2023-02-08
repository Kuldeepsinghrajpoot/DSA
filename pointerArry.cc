<<<<<<< HEAD
#include <bits/stdc++.h>
using namespace std;

void pointer(float arr[]) {
	float *ptr1 = &arr[0];
	float *ptr2 = ptr1 + 3;
	cout << *ptr2 << " ";
	cout << ptr2 - ptr1;
	return;
}
void charSign(int *p) {
	*p = (*p) * -1;
}

// passing the argument

void fun(int a[]) {

	cout << "function value" << a[0] << " ";
}


int main() {
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);

	char st[] = "ABCD";
	for (int i = 0; i < st[i] != '\0'; ++i)
	{
		//cout<<i<<"-"<<i[st];
		//cout<<st[i]<<*(st)+i<<*(i+st)<<i[st];
	}

	float arr[] = {12.5, 10.0, 13.5, 90.5, 0.5};

	//pointer(arr);
	// changeSing function

	int b = 10;
	//charSign(&b);
	//cout << "change the sign of char" << b << endl;


	int ar[] = {1, 2, 3, 4};
	fun(ar + 1);
	cout << "main value" << ar[0];
	return 0;
=======
#include <bits/stdc++.h>
using namespace std;

void pointer(float arr[]) {
	float *ptr1 = &arr[0];
	float *ptr2 = ptr1 + 3;
	cout << *ptr2 << " ";
	cout << ptr2 - ptr1;
	return;
}
void charSign(int *p) {
	*p = (*p) * -1;
}

// passing the argument

void fun(int a[]) {

	cout << "function value" << a[0] << " ";
}


int main() {
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);

	char st[] = "ABCD";
	for (int i = 0; i < st[i] != '\0'; ++i)
	{
		//cout<<i<<"-"<<i[st];
		//cout<<st[i]<<*(st)+i<<*(i+st)<<i[st];
	}

	float arr[] = {12.5, 10.0, 13.5, 90.5, 0.5};

	//pointer(arr);
	// changeSing function

	int b = 10;
	//charSign(&b);
	//cout << "change the sign of char" << b << endl;


	int ar[] = {1, 2, 3, 4};
	fun(ar + 1);
	cout << "main value" << ar[0];
	return 0;
>>>>>>> de7ed409bd884c11208b4a183d94fda8a318950c
}