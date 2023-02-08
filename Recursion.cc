<<<<<<< HEAD
#include <bits/stdc++.h>
using namespace std;

// calculating factorial numbers;
int recursion(int n) {

	if (n == 1)
	{
		return 1;
	}
	return n * recursion(n - 1);
}

int power(int n) {
	if (n == 0)
	{
		return 1;
	}
	return 2 * power(n - 1);
}

int main() {
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);

	//cout<<recursion(5);

	cout << power(3);
	return 0;
=======
#include <bits/stdc++.h>
using namespace std;

// calculating factorial numbers;
int recursion(int n) {

	if (n == 1)
	{
		return 1;
	}
	return n * recursion(n - 1);
}

int power(int n) {
	if (n == 0)
	{
		return 1;
	}
	return 2 * power(n - 1);
}

int main() {
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);

	//cout<<recursion(5);

	cout << power(3);
	return 0;
>>>>>>> de7ed409bd884c11208b4a183d94fda8a318950c
}